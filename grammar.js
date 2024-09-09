/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "YOUR_LANGUAGE_NAME",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.variable_declaration),

    variable_declaration: ($) => seq("const", $.identifier, "=", $.expression),

    expression: ($) => choice($.literal),

    literal: ($) => /'.*'/,

    identifier: ($) => /[a-z]+/,
  },
});
