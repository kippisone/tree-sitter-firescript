#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_log = 1,
  anon_sym_COMMA = 2,
  anon_sym_class = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_return = 6,
  anon_sym_xonst = 7,
  anon_sym_let = 8,
  anon_sym_EQ = 9,
  anon_sym_DOT = 10,
  sym_literal = 11,
  sym_identifier = 12,
  sym_number = 13,
  sym_indent = 14,
  sym_dedent = 15,
  sym__newline = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_log_statement = 19,
  sym_class_declaration = 20,
  sym__suite = 21,
  sym_class_body = 22,
  sym_method_definition = 23,
  sym_param_list = 24,
  sym_return_statement = 25,
  sym_body = 26,
  sym_variable_declaration = 27,
  sym_variable_declarator = 28,
  sym__expressions = 29,
  sym_member_expression = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_log_statement_repeat1 = 32,
  aux_sym_class_body_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_log] = "log",
  [anon_sym_COMMA] = ",",
  [anon_sym_class] = "class",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_return] = "return",
  [anon_sym_xonst] = "xonst",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym_literal] = "literal",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_log_statement] = "log_statement",
  [sym_class_declaration] = "class_declaration",
  [sym__suite] = "_suite",
  [sym_class_body] = "class_body",
  [sym_method_definition] = "method_definition",
  [sym_param_list] = "param_list",
  [sym_return_statement] = "return_statement",
  [sym_body] = "body",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_declarator] = "variable_declarator",
  [sym__expressions] = "_expressions",
  [sym_member_expression] = "member_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_log_statement_repeat1] = "log_statement_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_xonst] = anon_sym_xonst,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_literal] = sym_literal,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_log_statement] = sym_log_statement,
  [sym_class_declaration] = sym_class_declaration,
  [sym__suite] = sym__suite,
  [sym_class_body] = sym_class_body,
  [sym_method_definition] = sym_method_definition,
  [sym_param_list] = sym_param_list,
  [sym_return_statement] = sym_return_statement,
  [sym_body] = sym_body,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_declarator] = sym_variable_declarator,
  [sym__expressions] = sym__expressions,
  [sym_member_expression] = sym_member_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_log_statement_repeat1] = aux_sym_log_statement_repeat1,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xonst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_dedent] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_log_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__suite] = {
    .visible = false,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_method_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym__expressions] = {
    .visible = false,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_log_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_expression = 1,
  field_name = 2,
  field_object = 3,
  field_params = 4,
  field_property = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_name] = "name",
  [field_object] = "object",
  [field_params] = "params",
  [field_property] = "property",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_object, 0},
    {field_property, 2},
  [4] =
    {field_name, 0},
    {field_params, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 2,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 13,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 15,
  [24] = 24,
  [25] = 15,
  [26] = 26,
  [27] = 21,
  [28] = 28,
  [29] = 24,
  [30] = 22,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 28,
  [35] = 33,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 37,
  [42] = 40,
  [43] = 39,
  [44] = 44,
  [45] = 38,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 53,
  [58] = 58,
  [59] = 55,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
  [66] = 62,
  [67] = 62,
  [68] = 61,
  [69] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      ADVANCE_MAP(
        '\'', 2,
        '(', 27,
        ')', 28,
        ',', 24,
        '.', 36,
        '=', 35,
        'c', 42,
        'l', 39,
        'r', 40,
        'x', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_xonst);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_xonst);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 20, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20, .external_lex_state = 2},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20, .external_lex_state = 2},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20, .external_lex_state = 2},
  [23] = {.lex_state = 20, .external_lex_state = 2},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20, .external_lex_state = 2},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20, .external_lex_state = 2},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20, .external_lex_state = 2},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20, .external_lex_state = 2},
  [35] = {.lex_state = 20, .external_lex_state = 2},
  [36] = {.lex_state = 20, .external_lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 3},
  [51] = {.lex_state = 1, .external_lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0, .external_lex_state = 4},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 4},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_xonst] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym__definition] = STATE(9),
    [sym_log_statement] = STATE(9),
    [sym_class_declaration] = STATE(9),
    [sym_return_statement] = STATE(9),
    [sym_variable_declaration] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_log] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_xonst] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(24), 1,
      sym_dedent,
    ACTIONS(18), 2,
      sym_literal,
      sym_number,
    STATE(2), 3,
      sym__expressions,
      sym_member_expression,
      aux_sym_log_statement_repeat1,
    ACTIONS(13), 5,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [26] = 6,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(34), 1,
      sym_dedent,
    ACTIONS(30), 2,
      sym_literal,
      sym_number,
    STATE(6), 3,
      sym__expressions,
      sym_member_expression,
      aux_sym_log_statement_repeat1,
    ACTIONS(26), 5,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [52] = 6,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(38), 2,
      sym_literal,
      sym_number,
    STATE(8), 3,
      sym__expressions,
      sym_member_expression,
      aux_sym_log_statement_repeat1,
    ACTIONS(26), 5,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [78] = 7,
    ACTIONS(42), 1,
      anon_sym_log,
    ACTIONS(44), 1,
      anon_sym_class,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      sym_dedent,
    STATE(58), 1,
      sym_body,
    ACTIONS(48), 2,
      anon_sym_xonst,
      anon_sym_let,
    STATE(10), 6,
      sym__definition,
      sym_log_statement,
      sym_class_declaration,
      sym_return_statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [106] = 6,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_dedent,
    ACTIONS(54), 2,
      sym_literal,
      sym_number,
    STATE(2), 3,
      sym__expressions,
      sym_member_expression,
      aux_sym_log_statement_repeat1,
    ACTIONS(52), 5,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [132] = 6,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(61), 2,
      sym_literal,
      sym_number,
    STATE(7), 3,
      sym__expressions,
      sym_member_expression,
      aux_sym_log_statement_repeat1,
    ACTIONS(13), 5,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [158] = 6,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 2,
      sym_literal,
      sym_number,
    STATE(7), 3,
      sym__expressions,
      sym_member_expression,
      aux_sym_log_statement_repeat1,
    ACTIONS(52), 5,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [184] = 6,
    ACTIONS(5), 1,
      anon_sym_log,
    ACTIONS(7), 1,
      anon_sym_class,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_xonst,
      anon_sym_let,
    STATE(11), 6,
      sym__definition,
      sym_log_statement,
      sym_class_declaration,
      sym_return_statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [209] = 6,
    ACTIONS(42), 1,
      anon_sym_log,
    ACTIONS(44), 1,
      anon_sym_class,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(71), 1,
      sym_dedent,
    ACTIONS(48), 2,
      anon_sym_xonst,
      anon_sym_let,
    STATE(12), 6,
      sym__definition,
      sym_log_statement,
      sym_class_declaration,
      sym_return_statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [234] = 6,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_log,
    ACTIONS(78), 1,
      anon_sym_class,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(84), 2,
      anon_sym_xonst,
      anon_sym_let,
    STATE(11), 6,
      sym__definition,
      sym_log_statement,
      sym_class_declaration,
      sym_return_statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [259] = 6,
    ACTIONS(73), 1,
      sym_dedent,
    ACTIONS(87), 1,
      anon_sym_log,
    ACTIONS(90), 1,
      anon_sym_class,
    ACTIONS(93), 1,
      anon_sym_return,
    ACTIONS(96), 2,
      anon_sym_xonst,
      anon_sym_let,
    STATE(12), 6,
      sym__definition,
      sym_log_statement,
      sym_class_declaration,
      sym_return_statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [284] = 3,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(101), 4,
      sym_dedent,
      anon_sym_COMMA,
      sym_literal,
      sym_number,
    ACTIONS(99), 6,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
      sym_identifier,
  [302] = 3,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_literal,
      sym_number,
    ACTIONS(99), 6,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
      sym_identifier,
  [320] = 2,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_literal,
      sym_number,
    ACTIONS(109), 6,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
      sym_identifier,
  [335] = 2,
    ACTIONS(107), 4,
      sym_dedent,
      anon_sym_COMMA,
      sym_literal,
      sym_number,
    ACTIONS(109), 6,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
      sym_identifier,
  [350] = 2,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_literal,
      sym_number,
    ACTIONS(13), 6,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
      sym_identifier,
  [365] = 2,
    ACTIONS(24), 4,
      sym_dedent,
      anon_sym_COMMA,
      sym_literal,
      sym_number,
    ACTIONS(13), 6,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
      sym_identifier,
  [380] = 2,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [392] = 2,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(101), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [404] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [413] = 1,
    ACTIONS(117), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [422] = 1,
    ACTIONS(107), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [431] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [440] = 1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [449] = 1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [458] = 1,
    ACTIONS(115), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [467] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [476] = 1,
    ACTIONS(119), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [485] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [494] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [503] = 1,
    ACTIONS(121), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [512] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [521] = 1,
    ACTIONS(123), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [530] = 1,
    ACTIONS(127), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [539] = 1,
    ACTIONS(125), 6,
      sym_dedent,
      anon_sym_log,
      anon_sym_class,
      anon_sym_return,
      anon_sym_xonst,
      anon_sym_let,
  [548] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(129), 2,
      sym_literal,
      sym_number,
    STATE(17), 2,
      sym__expressions,
      sym_member_expression,
  [560] = 4,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      sym_dedent,
    STATE(32), 1,
      sym_class_body,
    STATE(48), 2,
      sym_method_definition,
      aux_sym_class_body_repeat1,
  [574] = 3,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(137), 2,
      sym_literal,
      sym_number,
    STATE(35), 2,
      sym__expressions,
      sym_member_expression,
  [586] = 3,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(141), 2,
      sym_literal,
      sym_number,
    STATE(3), 2,
      sym__expressions,
      sym_member_expression,
  [598] = 3,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 2,
      sym_literal,
      sym_number,
    STATE(18), 2,
      sym__expressions,
      sym_member_expression,
  [610] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(147), 2,
      sym_literal,
      sym_number,
    STATE(4), 2,
      sym__expressions,
      sym_member_expression,
  [622] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(149), 2,
      sym_literal,
      sym_number,
    STATE(33), 2,
      sym__expressions,
      sym_member_expression,
  [634] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 2,
      sym_literal,
      sym_number,
    STATE(28), 2,
      sym__expressions,
      sym_member_expression,
  [646] = 4,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_dedent,
    STATE(26), 1,
      sym_class_body,
    STATE(49), 2,
      sym_method_definition,
      aux_sym_class_body_repeat1,
  [660] = 3,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(157), 2,
      sym_literal,
      sym_number,
    STATE(34), 2,
      sym__expressions,
      sym_member_expression,
  [672] = 3,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym_dedent,
    STATE(47), 2,
      sym_method_definition,
      aux_sym_class_body_repeat1,
  [683] = 3,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(164), 1,
      sym_dedent,
    STATE(47), 2,
      sym_method_definition,
      aux_sym_class_body_repeat1,
  [694] = 3,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(166), 1,
      sym_dedent,
    STATE(47), 2,
      sym_method_definition,
      aux_sym_class_body_repeat1,
  [705] = 1,
    ACTIONS(168), 3,
      sym_indent,
      sym_dedent,
      sym_identifier,
  [711] = 2,
    ACTIONS(172), 1,
      sym_indent,
    ACTIONS(170), 2,
      sym_dedent,
      sym_identifier,
  [719] = 2,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_param_list,
  [726] = 2,
    ACTIONS(176), 1,
      sym_indent,
    STATE(21), 1,
      sym__suite,
  [733] = 1,
    ACTIONS(178), 2,
      sym_dedent,
      sym_identifier,
  [738] = 2,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(31), 1,
      sym_variable_declarator,
  [745] = 1,
    ACTIONS(182), 2,
      sym_dedent,
      sym_identifier,
  [750] = 2,
    ACTIONS(184), 1,
      sym_indent,
    STATE(27), 1,
      sym__suite,
  [757] = 1,
    ACTIONS(186), 2,
      sym_dedent,
      sym_identifier,
  [762] = 2,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(36), 1,
      sym_variable_declarator,
  [769] = 1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
  [773] = 1,
    ACTIONS(192), 1,
      sym_identifier,
  [777] = 1,
    ACTIONS(194), 1,
      sym_identifier,
  [781] = 1,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
  [785] = 1,
    ACTIONS(198), 1,
      anon_sym_EQ,
  [789] = 1,
    ACTIONS(200), 1,
      sym_identifier,
  [793] = 1,
    ACTIONS(202), 1,
      sym_identifier,
  [797] = 1,
    ACTIONS(204), 1,
      sym_identifier,
  [801] = 1,
    ACTIONS(206), 1,
      sym_identifier,
  [805] = 1,
    ACTIONS(208), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 259,
  [SMALL_STATE(13)] = 284,
  [SMALL_STATE(14)] = 302,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 335,
  [SMALL_STATE(17)] = 350,
  [SMALL_STATE(18)] = 365,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 392,
  [SMALL_STATE(21)] = 404,
  [SMALL_STATE(22)] = 413,
  [SMALL_STATE(23)] = 422,
  [SMALL_STATE(24)] = 431,
  [SMALL_STATE(25)] = 440,
  [SMALL_STATE(26)] = 449,
  [SMALL_STATE(27)] = 458,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 476,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 494,
  [SMALL_STATE(32)] = 503,
  [SMALL_STATE(33)] = 512,
  [SMALL_STATE(34)] = 521,
  [SMALL_STATE(35)] = 530,
  [SMALL_STATE(36)] = 539,
  [SMALL_STATE(37)] = 548,
  [SMALL_STATE(38)] = 560,
  [SMALL_STATE(39)] = 574,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 598,
  [SMALL_STATE(42)] = 610,
  [SMALL_STATE(43)] = 622,
  [SMALL_STATE(44)] = 634,
  [SMALL_STATE(45)] = 646,
  [SMALL_STATE(46)] = 660,
  [SMALL_STATE(47)] = 672,
  [SMALL_STATE(48)] = 683,
  [SMALL_STATE(49)] = 694,
  [SMALL_STATE(50)] = 705,
  [SMALL_STATE(51)] = 711,
  [SMALL_STATE(52)] = 719,
  [SMALL_STATE(53)] = 726,
  [SMALL_STATE(54)] = 733,
  [SMALL_STATE(55)] = 738,
  [SMALL_STATE(56)] = 745,
  [SMALL_STATE(57)] = 750,
  [SMALL_STATE(58)] = 757,
  [SMALL_STATE(59)] = 762,
  [SMALL_STATE(60)] = 769,
  [SMALL_STATE(61)] = 773,
  [SMALL_STATE(62)] = 777,
  [SMALL_STATE(63)] = 781,
  [SMALL_STATE(64)] = 785,
  [SMALL_STATE(65)] = 789,
  [SMALL_STATE(66)] = 793,
  [SMALL_STATE(67)] = 797,
  [SMALL_STATE(68)] = 801,
  [SMALL_STATE(69)] = 805,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_statement_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_statement_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_statement, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_statement, 3, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expressions, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3, 0, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 4, 0, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_indent = 0,
  ts_external_token_dedent = 1,
  ts_external_token__newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token__newline] = sym__newline,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token__newline] = true,
  },
  [2] = {
    [ts_external_token_dedent] = true,
  },
  [3] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
  },
  [4] = {
    [ts_external_token_indent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_firescript_external_scanner_create(void);
void tree_sitter_firescript_external_scanner_destroy(void *);
bool tree_sitter_firescript_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_firescript_external_scanner_serialize(void *, char *);
void tree_sitter_firescript_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_firescript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_firescript_external_scanner_create,
      tree_sitter_firescript_external_scanner_destroy,
      tree_sitter_firescript_external_scanner_scan,
      tree_sitter_firescript_external_scanner_serialize,
      tree_sitter_firescript_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
