#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_class = 1,
  anon_sym_async = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_const = 6,
  anon_sym_let = 7,
  anon_sym_EQ = 8,
  sym_literal = 9,
  sym_identifier = 10,
  sym_source_file = 11,
  sym__definition = 12,
  sym_class_declaration = 13,
  sym_class_body = 14,
  sym_method_definition = 15,
  sym_param_list = 16,
  sym_variable_declaration = 17,
  sym_variable_declarator = 18,
  sym__expressions = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_class_body_repeat1 = 21,
  aux_sym_param_list_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_async] = "async",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_const] = "const",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [sym_literal] = "literal",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_class_declaration] = "class_declaration",
  [sym_class_body] = "class_body",
  [sym_method_definition] = "method_definition",
  [sym_param_list] = "param_list",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_declarator] = "variable_declarator",
  [sym__expressions] = "_expressions",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_literal] = sym_literal,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_class_declaration] = sym_class_declaration,
  [sym_class_body] = sym_class_body,
  [sym_method_definition] = sym_method_definition,
  [sym_param_list] = sym_param_list,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_declarator] = sym_variable_declarator,
  [sym__expressions] = sym__expressions,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [sym_class_declaration] = {
    .visible = true,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '\'', 2,
        '(', 18,
        ')', 20,
        ',', 19,
        '=', 25,
        'a', 33,
        'c', 30,
        'l', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == ')') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_async);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(31);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym__definition] = STATE(2),
    [sym_class_declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_class,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(3), 4,
      sym__definition,
      sym_class_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [17] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_class,
    ACTIONS(16), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(3), 4,
      sym__definition,
      sym_class_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [34] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_async,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(4), 2,
      sym_method_definition,
      aux_sym_class_body_repeat1,
    ACTIONS(21), 3,
      anon_sym_class,
      anon_sym_const,
      anon_sym_let,
  [53] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_async,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(4), 2,
      sym_method_definition,
      aux_sym_class_body_repeat1,
    ACTIONS(31), 3,
      anon_sym_class,
      anon_sym_const,
      anon_sym_let,
  [72] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 5,
      anon_sym_class,
      anon_sym_async,
      anon_sym_const,
      anon_sym_let,
      sym_identifier,
  [83] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 5,
      anon_sym_class,
      anon_sym_async,
      anon_sym_const,
      anon_sym_let,
      sym_identifier,
  [94] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 5,
      anon_sym_class,
      anon_sym_async,
      anon_sym_const,
      anon_sym_let,
      sym_identifier,
  [105] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 5,
      anon_sym_class,
      anon_sym_async,
      anon_sym_const,
      anon_sym_let,
      sym_identifier,
  [116] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 5,
      anon_sym_class,
      anon_sym_async,
      anon_sym_const,
      anon_sym_let,
      sym_identifier,
  [127] = 4,
    ACTIONS(33), 1,
      anon_sym_async,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(14), 1,
      sym_class_body,
    STATE(5), 2,
      sym_method_definition,
      aux_sym_class_body_repeat1,
  [141] = 1,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_const,
      anon_sym_let,
  [148] = 1,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_const,
      anon_sym_let,
  [155] = 1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_const,
      anon_sym_let,
  [162] = 2,
    STATE(13), 1,
      sym__expressions,
    ACTIONS(63), 2,
      sym_literal,
      sym_identifier,
  [170] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_param_list_repeat1,
  [180] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_param_list_repeat1,
  [190] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_param_list_repeat1,
  [200] = 2,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 1,
      sym_identifier,
  [207] = 2,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_param_list,
  [214] = 2,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_param_list,
  [221] = 1,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [226] = 2,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(12), 1,
      sym_variable_declarator,
  [233] = 1,
    ACTIONS(84), 1,
      sym_identifier,
  [237] = 1,
    ACTIONS(86), 1,
      sym_identifier,
  [241] = 1,
    ACTIONS(88), 1,
      anon_sym_EQ,
  [245] = 1,
    ACTIONS(90), 1,
      sym_identifier,
  [249] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 127,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 148,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 200,
  [SMALL_STATE(20)] = 207,
  [SMALL_STATE(21)] = 214,
  [SMALL_STATE(22)] = 221,
  [SMALL_STATE(23)] = 226,
  [SMALL_STATE(24)] = 233,
  [SMALL_STATE(25)] = 237,
  [SMALL_STATE(26)] = 241,
  [SMALL_STATE(27)] = 245,
  [SMALL_STATE(28)] = 249,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_list, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_list, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_list, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
