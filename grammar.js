/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "firescript",

  // conflicts: ($) => [
  //   ["constructor", "const"],
  //   [$.class_declaration, $.variable_declaration],
  // ],

  externals: ($) => [$.indent, $.dedent, $._newline],

  word: ($) => $.identifier,

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.log_statement,
        $.class_declaration,
        $.variable_declaration,
        $.return_statement,
        $.if_statement,
        $.elif_statement,
        $.else_statement,
      ),

    log_statement: ($) => seq("log", list1($._expressions)),

    if_statement: ($) => seq("if", $._expressions),
    elif_statement: ($) => seq("elif", $._expressions),
    else_statement: ($) => seq("else"),

    class_declaration: ($) =>
      seq("class", field("name", $.identifier), $._suite),

    _suite: ($) => seq($.indent, $.class_body),
    class_body: ($) => seq(repeat(choice($.method_definition)), $.dedent),

    method_definition: ($) =>
      seq(
        field("name", $.identifier),
        field("params", $.param_list),
        optional(seq($.indent, $.body)),
      ),

    param_list: ($) => seq("(", ")"),

    return_statement: ($) => seq("return", field("expression", $._expressions)),

    body: ($) => seq(repeat($._definition), $.dedent),

    variable_declaration: ($) => seq("const", $.variable_declarator),

    variable_declarator: ($) => seq($.identifier, "=", $._expressions),

    _expressions: ($) =>
      choice($.literal, $.identifier, $.number, $.member_expression),

    member_expression: ($) =>
      seq(field("object", $.identifier), ".", field("property", $.identifier)),

    literal: ($) => /'.*'/,

    identifier: ($) => /[a-zA-Z$][a-zA-Z0-9$_]*/,

    number: ($) => /\d+(\.\d+)?/,
  },
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to match zero or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}

/**
 * Creates a rule to match one or more of the rules separated by an optional comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function list1(rule) {
  return seq(rule, repeat(seq(optional(","), rule)));
}
