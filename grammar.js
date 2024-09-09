/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "firescript",

  conflicts: ($) => [[$.class_declaration, $.literal]],
  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.variable_declaration, $.class_declaration),

    class_declaration: ($) => seq("class", $.identifier, $.class_body),

    class_body: ($) => repeat1(choice($.method_definition)),

    method_definition: ($) =>
      seq(optional("async"), $.identifier, $.param_list),

    param_list: ($) => seq("(", commaSep($.identifier), ")"),

    body: ($) => repeat1($._definition),

    variable_declaration: ($) =>
      seq(choice("const", "let"), $.variable_declarator),

    variable_declarator: ($) => seq($.identifier, "=", $._expressions),

    _expressions: ($) => choice($.literal, $.identifier),

    literal: ($) => /'.*'/,

    identifier: ($) => /[a-zA-Z0-9$][a-zA-Z0-9$_]*/,
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
