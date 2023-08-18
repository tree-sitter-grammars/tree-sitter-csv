#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 30
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_document_token1 = 1,
  anon_sym_COMMA = 2,
  sym_text = 3,
  sym_number = 4,
  aux_sym_float_token1 = 5,
  aux_sym_float_token2 = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_document = 9,
  sym_row = 10,
  sym_field = 11,
  sym_float = 12,
  sym_boolean = 13,
  aux_sym_document_repeat1 = 14,
  aux_sym_row_repeat1 = 15,
  aux_sym_row_repeat2 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_COMMA] = ",",
  [sym_text] = "text",
  [sym_number] = "number",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_document] = "document",
  [sym_row] = "row",
  [sym_field] = "field",
  [sym_float] = "float",
  [sym_boolean] = "boolean",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
  [aux_sym_row_repeat2] = "row_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_text] = sym_text,
  [sym_number] = sym_number,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_document] = sym_document,
  [sym_row] = sym_row,
  [sym_field] = sym_field,
  [sym_float] = sym_float,
  [sym_boolean] = sym_boolean,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_row_repeat1] = aux_sym_row_repeat1,
  [aux_sym_row_repeat2] = aux_sym_row_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_row] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_repeat2] = {
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
  [11] = 5,
  [12] = 12,
  [13] = 6,
  [14] = 14,
  [15] = 7,
  [16] = 3,
  [17] = 4,
  [18] = 12,
  [19] = 9,
  [20] = 14,
  [21] = 10,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 24,
  [30] = 30,
  [31] = 26,
  [32] = 28,
  [33] = 27,
  [34] = 25,
  [35] = 24,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ',') ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(38),
    [sym_row] = STATE(37),
    [sym_field] = STATE(7),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_document_repeat1] = STATE(8),
    [aux_sym_row_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [2] = {
    [sym_row] = STATE(39),
    [sym_field] = STATE(15),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_row_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [sym_text] = ACTIONS(18),
    [sym_number] = ACTIONS(18),
    [aux_sym_float_token1] = ACTIONS(21),
    [aux_sym_float_token2] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(24),
    [anon_sym_false] = ACTIONS(24),
  },
  [3] = {
    [sym_field] = STATE(6),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(12),
    [aux_sym_row_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_document_token1] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [4] = {
    [sym_field] = STATE(5),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(12),
    [aux_sym_row_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_document_token1] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [5] = {
    [sym_field] = STATE(6),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(14),
    [aux_sym_row_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_document_token1] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [6] = {
    [sym_field] = STATE(6),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(23),
    [aux_sym_row_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_document_token1] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_text] = ACTIONS(40),
    [sym_number] = ACTIONS(40),
    [aux_sym_float_token1] = ACTIONS(43),
    [aux_sym_float_token2] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
  },
  [7] = {
    [sym_field] = STATE(3),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(10),
    [aux_sym_row_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_document_token1] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(51),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [8] = {
    [sym_row] = STATE(36),
    [sym_field] = STATE(7),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_row_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [9] = {
    [sym_field] = STATE(4),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_document_token1] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(55),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [10] = {
    [sym_field] = STATE(27),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_document_token1] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(55),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [11] = {
    [sym_field] = STATE(13),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(20),
    [aux_sym_row_repeat2] = STATE(13),
    [aux_sym_document_token1] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(57),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [12] = {
    [sym_field] = STATE(27),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_document_token1] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(55),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [13] = {
    [sym_field] = STATE(13),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(22),
    [aux_sym_row_repeat2] = STATE(13),
    [aux_sym_document_token1] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(65),
    [sym_text] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [aux_sym_float_token1] = ACTIONS(71),
    [aux_sym_float_token2] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
  },
  [14] = {
    [sym_field] = STATE(27),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_document_token1] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(55),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [15] = {
    [sym_field] = STATE(16),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(21),
    [aux_sym_row_repeat2] = STATE(16),
    [aux_sym_document_token1] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(79),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [16] = {
    [sym_field] = STATE(13),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(18),
    [aux_sym_row_repeat2] = STATE(13),
    [aux_sym_document_token1] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(81),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [17] = {
    [sym_field] = STATE(11),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(18),
    [aux_sym_row_repeat2] = STATE(11),
    [aux_sym_document_token1] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(81),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [18] = {
    [sym_field] = STATE(33),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(29),
    [aux_sym_document_token1] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [19] = {
    [sym_field] = STATE(17),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(29),
    [aux_sym_document_token1] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [20] = {
    [sym_field] = STATE(33),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(29),
    [aux_sym_document_token1] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [21] = {
    [sym_field] = STATE(33),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(29),
    [aux_sym_document_token1] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [22] = {
    [sym_field] = STATE(33),
    [sym_float] = STATE(34),
    [sym_boolean] = STATE(34),
    [aux_sym_row_repeat1] = STATE(35),
    [anon_sym_COMMA] = ACTIONS(85),
    [sym_text] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [aux_sym_float_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
  },
  [23] = {
    [sym_field] = STATE(27),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(35),
    [anon_sym_COMMA] = ACTIONS(85),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [aux_sym_float_token1] = ACTIONS(9),
    [aux_sym_float_token2] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
  },
  [24] = {
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_document_token1] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(89),
    [sym_text] = ACTIONS(92),
    [sym_number] = ACTIONS(92),
    [aux_sym_float_token1] = ACTIONS(92),
    [aux_sym_float_token2] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_document_token1] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(96),
    [sym_text] = ACTIONS(96),
    [sym_number] = ACTIONS(96),
    [aux_sym_float_token1] = ACTIONS(96),
    [aux_sym_float_token2] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym_document_token1] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(100),
    [sym_text] = ACTIONS(100),
    [sym_number] = ACTIONS(100),
    [aux_sym_float_token1] = ACTIONS(100),
    [aux_sym_float_token2] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_document_token1] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(102),
    [sym_text] = ACTIONS(102),
    [sym_number] = ACTIONS(102),
    [aux_sym_float_token1] = ACTIONS(102),
    [aux_sym_float_token2] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(102),
    [anon_sym_false] = ACTIONS(102),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_document_token1] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(106),
    [sym_text] = ACTIONS(106),
    [sym_number] = ACTIONS(106),
    [aux_sym_float_token1] = ACTIONS(106),
    [aux_sym_float_token2] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_false] = ACTIONS(106),
  },
  [29] = {
    [aux_sym_row_repeat1] = STATE(29),
    [aux_sym_document_token1] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(108),
    [sym_text] = ACTIONS(92),
    [sym_number] = ACTIONS(92),
    [aux_sym_float_token1] = ACTIONS(92),
    [aux_sym_float_token2] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(111), 6,
      sym_text,
      sym_number,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [13] = 2,
    ACTIONS(98), 1,
      aux_sym_document_token1,
    ACTIONS(100), 7,
      anon_sym_COMMA,
      sym_text,
      sym_number,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [26] = 2,
    ACTIONS(104), 1,
      aux_sym_document_token1,
    ACTIONS(106), 7,
      anon_sym_COMMA,
      sym_text,
      sym_number,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [39] = 2,
    ACTIONS(35), 1,
      aux_sym_document_token1,
    ACTIONS(102), 7,
      anon_sym_COMMA,
      sym_text,
      sym_number,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [52] = 2,
    ACTIONS(94), 1,
      aux_sym_document_token1,
    ACTIONS(96), 7,
      anon_sym_COMMA,
      sym_text,
      sym_number,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [65] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_row_repeat1,
    ACTIONS(92), 6,
      sym_text,
      sym_number,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [80] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_document_token1,
  [87] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_document_token1,
  [94] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [98] = 1,
    ACTIONS(118), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(30)] = 0,
  [SMALL_STATE(31)] = 13,
  [SMALL_STATE(32)] = 26,
  [SMALL_STATE(33)] = 39,
  [SMALL_STATE(34)] = 52,
  [SMALL_STATE(35)] = 65,
  [SMALL_STATE(36)] = 80,
  [SMALL_STATE(37)] = 87,
  [SMALL_STATE(38)] = 94,
  [SMALL_STATE(39)] = 98,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(23),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(25),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(26),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(22),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(34),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(31),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(32),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(24),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(29),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_csv(void) {
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
