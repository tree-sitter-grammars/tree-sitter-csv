#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_document_token1 = 1,
  anon_sym_TAB = 2,
  aux_sym_number_token1 = 3,
  aux_sym_number_token2 = 4,
  aux_sym_float_token1 = 5,
  aux_sym_float_token2 = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_text = 9,
  sym_document = 10,
  sym_row = 11,
  sym_field = 12,
  sym_number = 13,
  sym_float = 14,
  sym_boolean = 15,
  aux_sym_document_repeat1 = 16,
  aux_sym_row_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_TAB] = "\t",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_text] = "text",
  [sym_document] = "document",
  [sym_row] = "row",
  [sym_field] = "field",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_boolean] = "boolean",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_TAB] = anon_sym_TAB,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_text] = sym_text,
  [sym_document] = sym_document,
  [sym_row] = sym_row,
  [sym_field] = sym_field,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_boolean] = sym_boolean,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_row_repeat1] = aux_sym_row_repeat1,
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
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
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
  [sym_text] = {
    .visible = true,
    .named = true,
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
  [sym_number] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 9,
  [16] = 8,
  [17] = 17,
  [18] = 11,
  [19] = 12,
  [20] = 13,
  [21] = 14,
  [22] = 22,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_text);
      if (eof) ADVANCE(4);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(26),
    [sym_row] = STATE(24),
    [sym_field] = STATE(7),
    [sym_number] = STATE(14),
    [sym_float] = STATE(14),
    [sym_boolean] = STATE(14),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(5),
    [aux_sym_number_token2] = ACTIONS(5),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
  [2] = {
    [sym_row] = STATE(22),
    [sym_field] = STATE(7),
    [sym_number] = STATE(14),
    [sym_float] = STATE(14),
    [sym_boolean] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(5),
    [aux_sym_number_token2] = ACTIONS(5),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
  [3] = {
    [sym_row] = STATE(25),
    [sym_field] = STATE(10),
    [sym_number] = STATE(21),
    [sym_float] = STATE(21),
    [sym_boolean] = STATE(21),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_number_token1] = ACTIONS(17),
    [aux_sym_number_token2] = ACTIONS(17),
    [aux_sym_float_token1] = ACTIONS(20),
    [aux_sym_float_token2] = ACTIONS(20),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_text] = ACTIONS(26),
  },
  [4] = {
    [sym_field] = STATE(17),
    [sym_number] = STATE(14),
    [sym_float] = STATE(14),
    [sym_boolean] = STATE(14),
    [aux_sym_number_token1] = ACTIONS(5),
    [aux_sym_number_token2] = ACTIONS(5),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
  [5] = {
    [sym_field] = STATE(23),
    [sym_number] = STATE(21),
    [sym_float] = STATE(21),
    [sym_boolean] = STATE(21),
    [aux_sym_number_token1] = ACTIONS(29),
    [aux_sym_number_token2] = ACTIONS(29),
    [aux_sym_float_token1] = ACTIONS(31),
    [aux_sym_float_token2] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [sym_text] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 7,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
      sym_text,
  [13] = 4,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_document_token1,
    ACTIONS(43), 1,
      anon_sym_TAB,
    STATE(8), 1,
      aux_sym_row_repeat1,
  [26] = 4,
    ACTIONS(43), 1,
      anon_sym_TAB,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_document_token1,
    STATE(9), 1,
      aux_sym_row_repeat1,
  [39] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_document_token1,
    ACTIONS(53), 1,
      anon_sym_TAB,
    STATE(9), 1,
      aux_sym_row_repeat1,
  [52] = 3,
    ACTIONS(41), 1,
      aux_sym_document_token1,
    ACTIONS(56), 1,
      anon_sym_TAB,
    STATE(16), 1,
      aux_sym_row_repeat1,
  [62] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [70] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [78] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [86] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [94] = 3,
    ACTIONS(51), 1,
      aux_sym_document_token1,
    ACTIONS(74), 1,
      anon_sym_TAB,
    STATE(15), 1,
      aux_sym_row_repeat1,
  [104] = 3,
    ACTIONS(47), 1,
      aux_sym_document_token1,
    ACTIONS(56), 1,
      anon_sym_TAB,
    STATE(15), 1,
      aux_sym_row_repeat1,
  [114] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [122] = 1,
    ACTIONS(60), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [127] = 1,
    ACTIONS(64), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [132] = 1,
    ACTIONS(68), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [137] = 1,
    ACTIONS(72), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [142] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym_document_token1,
  [149] = 1,
    ACTIONS(51), 2,
      aux_sym_document_token1,
      anon_sym_TAB,
  [154] = 2,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym_document_token1,
  [161] = 1,
    ACTIONS(79), 1,
      aux_sym_document_token1,
  [165] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 13,
  [SMALL_STATE(8)] = 26,
  [SMALL_STATE(9)] = 39,
  [SMALL_STATE(10)] = 52,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 78,
  [SMALL_STATE(14)] = 86,
  [SMALL_STATE(15)] = 94,
  [SMALL_STATE(16)] = 104,
  [SMALL_STATE(17)] = 114,
  [SMALL_STATE(18)] = 122,
  [SMALL_STATE(19)] = 127,
  [SMALL_STATE(20)] = 132,
  [SMALL_STATE(21)] = 137,
  [SMALL_STATE(22)] = 142,
  [SMALL_STATE(23)] = 149,
  [SMALL_STATE(24)] = 154,
  [SMALL_STATE(25)] = 161,
  [SMALL_STATE(26)] = 165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tsv(void) {
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
