#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_document_token1 = 1,
  anon_sym_PIPE = 2,
  sym_text = 3,
  sym_number = 4,
  sym_float = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  sym_document = 8,
  sym_row = 9,
  sym_field = 10,
  sym_boolean = 11,
  aux_sym_document_repeat1 = 12,
  aux_sym_row_repeat1 = 13,
  aux_sym_row_repeat2 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_PIPE] = "|",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_document] = "document",
  [sym_row] = "row",
  [sym_field] = "field",
  [sym_boolean] = "boolean",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
  [aux_sym_row_repeat2] = "row_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_text] = sym_text,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_document] = sym_document,
  [sym_row] = sym_row,
  [sym_field] = sym_field,
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
  [anon_sym_PIPE] = {
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
  [sym_float] = {
    .visible = true,
    .named = true,
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
  [9] = 8,
  [10] = 2,
  [11] = 7,
  [12] = 5,
  [13] = 13,
  [14] = 14,
  [15] = 3,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 13,
  [20] = 17,
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 28,
  [29] = 25,
  [30] = 28,
  [31] = 31,
  [32] = 26,
  [33] = 23,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '|') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '|') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '|') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
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
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(37),
    [sym_row] = STATE(35),
    [sym_field] = STATE(3),
    [sym_boolean] = STATE(25),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_row_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [2] = {
    [sym_field] = STATE(2),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(22),
    [aux_sym_row_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_document_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym_text] = ACTIONS(18),
    [sym_number] = ACTIONS(18),
    [sym_float] = ACTIONS(18),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
  },
  [3] = {
    [sym_field] = STATE(5),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(14),
    [aux_sym_row_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_document_token1] = ACTIONS(26),
    [anon_sym_PIPE] = ACTIONS(28),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [4] = {
    [sym_row] = STATE(34),
    [sym_field] = STATE(3),
    [sym_boolean] = STATE(25),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_row_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [5] = {
    [sym_field] = STATE(2),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(17),
    [aux_sym_row_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_document_token1] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(36),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [6] = {
    [sym_row] = STATE(36),
    [sym_field] = STATE(15),
    [sym_boolean] = STATE(29),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_row_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_PIPE] = ACTIONS(40),
    [sym_text] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
    [sym_float] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
  },
  [7] = {
    [sym_field] = STATE(8),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(17),
    [aux_sym_row_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_document_token1] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(36),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [8] = {
    [sym_field] = STATE(2),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(16),
    [aux_sym_row_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_document_token1] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [9] = {
    [sym_field] = STATE(10),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(21),
    [aux_sym_row_repeat2] = STATE(10),
    [aux_sym_document_token1] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(55),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [10] = {
    [sym_field] = STATE(10),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(24),
    [aux_sym_row_repeat2] = STATE(10),
    [aux_sym_document_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(61),
    [sym_text] = ACTIONS(64),
    [sym_number] = ACTIONS(64),
    [sym_float] = ACTIONS(64),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
  },
  [11] = {
    [sym_field] = STATE(9),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(20),
    [aux_sym_row_repeat2] = STATE(9),
    [aux_sym_document_token1] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(70),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [12] = {
    [sym_field] = STATE(10),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(20),
    [aux_sym_row_repeat2] = STATE(10),
    [aux_sym_document_token1] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(70),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [13] = {
    [sym_field] = STATE(7),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_document_token1] = ACTIONS(26),
    [anon_sym_PIPE] = ACTIONS(72),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [14] = {
    [sym_field] = STATE(26),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(32),
    [aux_sym_document_token1] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(72),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [15] = {
    [sym_field] = STATE(12),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(18),
    [aux_sym_row_repeat2] = STATE(12),
    [aux_sym_document_token1] = ACTIONS(26),
    [anon_sym_PIPE] = ACTIONS(74),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [16] = {
    [sym_field] = STATE(26),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(76),
    [aux_sym_document_token1] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(72),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [17] = {
    [sym_field] = STATE(26),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_document_token1] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(72),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [18] = {
    [sym_field] = STATE(32),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(27),
    [aux_sym_document_token1] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(80),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [19] = {
    [sym_field] = STATE(11),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(27),
    [aux_sym_document_token1] = ACTIONS(26),
    [anon_sym_PIPE] = ACTIONS(80),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [20] = {
    [sym_field] = STATE(32),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(27),
    [aux_sym_document_token1] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(80),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [21] = {
    [sym_field] = STATE(32),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(27),
    [aux_sym_document_token1] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(80),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [22] = {
    [sym_field] = STATE(26),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(33),
    [anon_sym_PIPE] = ACTIONS(82),
    [sym_text] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
  },
  [23] = {
    [aux_sym_row_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(84),
    [aux_sym_document_token1] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(88),
    [sym_text] = ACTIONS(86),
    [sym_number] = ACTIONS(86),
    [sym_float] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_false] = ACTIONS(86),
  },
  [24] = {
    [sym_field] = STATE(32),
    [sym_boolean] = STATE(29),
    [aux_sym_row_repeat1] = STATE(33),
    [anon_sym_PIPE] = ACTIONS(82),
    [sym_text] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_document_token1] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
    [sym_number] = ACTIONS(93),
    [sym_float] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_document_token1] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(13),
    [sym_text] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [sym_float] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [27] = {
    [aux_sym_row_repeat1] = STATE(27),
    [aux_sym_document_token1] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(95),
    [sym_text] = ACTIONS(86),
    [sym_number] = ACTIONS(86),
    [sym_float] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_false] = ACTIONS(86),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym_document_token1] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [sym_text] = ACTIONS(100),
    [sym_number] = ACTIONS(100),
    [sym_float] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(93), 7,
      aux_sym_document_token1,
      anon_sym_PIPE,
      sym_text,
      sym_number,
      sym_float,
      anon_sym_true,
      anon_sym_false,
  [10] = 1,
    ACTIONS(100), 7,
      aux_sym_document_token1,
      anon_sym_PIPE,
      sym_text,
      sym_number,
      sym_float,
      anon_sym_true,
      anon_sym_false,
  [20] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 6,
      anon_sym_PIPE,
      sym_text,
      sym_number,
      sym_float,
      anon_sym_true,
      anon_sym_false,
  [32] = 1,
    ACTIONS(13), 7,
      aux_sym_document_token1,
      anon_sym_PIPE,
      sym_text,
      sym_number,
      sym_float,
      anon_sym_true,
      anon_sym_false,
  [42] = 3,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    STATE(33), 1,
      aux_sym_row_repeat1,
    ACTIONS(86), 5,
      sym_text,
      sym_number,
      sym_float,
      anon_sym_true,
      anon_sym_false,
  [56] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      aux_sym_document_token1,
  [63] = 2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      aux_sym_document_token1,
  [70] = 1,
    ACTIONS(109), 1,
      aux_sym_document_token1,
  [74] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(29)] = 0,
  [SMALL_STATE(30)] = 10,
  [SMALL_STATE(31)] = 20,
  [SMALL_STATE(32)] = 32,
  [SMALL_STATE(33)] = 42,
  [SMALL_STATE(34)] = 56,
  [SMALL_STATE(35)] = 63,
  [SMALL_STATE(36)] = 70,
  [SMALL_STATE(37)] = 74,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat2, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(22),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(25),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(28),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(24),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(29),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2), SHIFT_REPEAT(30),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_psv(void) {
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
