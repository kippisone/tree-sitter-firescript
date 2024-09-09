/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "firescript",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($._variable_declaration),

    _variable_declaration: ($) =>
      seq("const", $.identifier, "=", $._expressions),

    _expressions: ($) => choice($.literal),

    literal: ($) => /'.*'/,

    identifier: ($) => /[a-z]+/,
  },
});
