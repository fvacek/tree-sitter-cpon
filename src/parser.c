#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LT = 1,
  anon_sym_COMMA = 2,
  anon_sym_GT = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_i_LBRACE = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_content_token1 = 11,
  sym_escape_sequence = 12,
  sym_number = 13,
  sym_true = 14,
  sym_false = 15,
  sym_null = 16,
  sym_comment = 17,
  sym_document = 18,
  sym__value = 19,
  sym_meta = 20,
  sym_mpair = 21,
  sym_map = 22,
  sym_pair = 23,
  sym_imap = 24,
  sym_ipair = 25,
  sym_array = 26,
  sym_string = 27,
  sym_string_content = 28,
  aux_sym_meta_repeat1 = 29,
  aux_sym_meta_repeat2 = 30,
  aux_sym_map_repeat1 = 31,
  aux_sym_imap_repeat1 = 32,
  aux_sym_array_repeat1 = 33,
  aux_sym_string_content_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_i_LBRACE] = "i{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_meta] = "meta",
  [sym_mpair] = "mpair",
  [sym_map] = "map",
  [sym_pair] = "pair",
  [sym_imap] = "imap",
  [sym_ipair] = "ipair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_imap_repeat1] = "imap_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_i_LBRACE] = anon_sym_i_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_meta] = sym_meta,
  [sym_mpair] = sym_mpair,
  [sym_map] = sym_map,
  [sym_pair] = sym_pair,
  [sym_imap] = sym_imap,
  [sym_ipair] = sym_ipair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_imap_repeat1] = aux_sym_imap_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_mpair] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_imap] = {
    .visible = true,
    .named = true,
  },
  [sym_ipair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_imap_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_i_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_i_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(72),
    [sym__value] = STATE(70),
    [sym_meta] = STATE(8),
    [sym_map] = STATE(70),
    [sym_imap] = STATE(70),
    [sym_array] = STATE(70),
    [sym_string] = STATE(70),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(62),
    [sym_meta] = STATE(8),
    [sym_map] = STATE(62),
    [sym_imap] = STATE(62),
    [sym_array] = STATE(62),
    [sym_string] = STATE(62),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(19),
    [sym_true] = ACTIONS(19),
    [sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_i_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_meta,
    ACTIONS(23), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(34), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [38] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_i_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_meta,
    ACTIONS(25), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(60), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [73] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_i_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_meta,
    ACTIONS(19), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(62), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [108] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_i_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_meta,
    ACTIONS(27), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(66), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [143] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_i_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_meta,
    ACTIONS(29), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(63), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [178] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_i_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(24), 4,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 8,
      anon_sym_LBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 8,
      anon_sym_LBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 8,
      anon_sym_LBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 8,
      anon_sym_LBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    STATE(67), 1,
      sym_mpair,
    STATE(69), 1,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_meta_repeat2,
    ACTIONS(52), 3,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [332] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(54), 1,
      anon_sym_GT,
    STATE(35), 1,
      sym_mpair,
    STATE(69), 1,
      sym_string,
  [351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [461] = 6,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_string_content_token1,
    ACTIONS(80), 1,
      sym_escape_sequence,
    ACTIONS(82), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_string_content_repeat1,
    STATE(71), 1,
      sym_string_content,
  [480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_pair,
    STATE(73), 1,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_imap_repeat1,
    STATE(52), 1,
      aux_sym_meta_repeat2,
  [535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_array_repeat1,
    STATE(53), 1,
      aux_sym_meta_repeat2,
  [551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_GT,
    STATE(41), 1,
      aux_sym_meta_repeat1,
    STATE(54), 1,
      aux_sym_meta_repeat2,
  [567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym_meta_repeat2,
    STATE(55), 1,
      aux_sym_map_repeat1,
  [583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_number,
    STATE(65), 1,
      sym_ipair,
    ACTIONS(17), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_number,
    STATE(67), 1,
      sym_mpair,
    STATE(69), 1,
      sym_string,
  [613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_meta_repeat2,
    STATE(59), 1,
      aux_sym_imap_repeat1,
  [629] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_pair,
    STATE(73), 1,
      sym_string,
  [645] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_GT,
    STATE(49), 1,
      aux_sym_meta_repeat1,
    STATE(50), 1,
      aux_sym_meta_repeat2,
  [661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_map_repeat1,
    STATE(51), 1,
      aux_sym_meta_repeat2,
  [677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_array_repeat1,
    STATE(58), 1,
      aux_sym_meta_repeat2,
  [693] = 5,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      aux_sym_string_content_token1,
    ACTIONS(120), 1,
      sym_escape_sequence,
    STATE(45), 1,
      aux_sym_string_content_repeat1,
  [709] = 5,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      aux_sym_string_content_token1,
    ACTIONS(127), 1,
      sym_escape_sequence,
    STATE(45), 1,
      aux_sym_string_content_repeat1,
  [725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_meta_repeat2,
  [738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_meta_repeat2,
  [751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_number,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_ipair,
  [764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_GT,
    STATE(49), 1,
      aux_sym_meta_repeat1,
  [777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_GT,
    STATE(17), 1,
      aux_sym_meta_repeat2,
  [790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_meta_repeat2,
  [803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_meta_repeat2,
  [816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_meta_repeat2,
  [829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_GT,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_meta_repeat2,
  [842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_map_repeat1,
  [855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_array_repeat1,
  [868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_pair,
    STATE(73), 1,
      sym_string,
  [881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_meta_repeat2,
  [894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_imap_repeat1,
  [907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_number,
    STATE(65), 1,
      sym_ipair,
  [949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COLON,
  [987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
  [1001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 206,
  [SMALL_STATE(10)] = 220,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 248,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 282,
  [SMALL_STATE(15)] = 294,
  [SMALL_STATE(16)] = 306,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 351,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 417,
  [SMALL_STATE(26)] = 428,
  [SMALL_STATE(27)] = 439,
  [SMALL_STATE(28)] = 450,
  [SMALL_STATE(29)] = 461,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 497,
  [SMALL_STATE(32)] = 508,
  [SMALL_STATE(33)] = 519,
  [SMALL_STATE(34)] = 535,
  [SMALL_STATE(35)] = 551,
  [SMALL_STATE(36)] = 567,
  [SMALL_STATE(37)] = 583,
  [SMALL_STATE(38)] = 597,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 629,
  [SMALL_STATE(41)] = 645,
  [SMALL_STATE(42)] = 661,
  [SMALL_STATE(43)] = 677,
  [SMALL_STATE(44)] = 693,
  [SMALL_STATE(45)] = 709,
  [SMALL_STATE(46)] = 725,
  [SMALL_STATE(47)] = 738,
  [SMALL_STATE(48)] = 751,
  [SMALL_STATE(49)] = 764,
  [SMALL_STATE(50)] = 777,
  [SMALL_STATE(51)] = 790,
  [SMALL_STATE(52)] = 803,
  [SMALL_STATE(53)] = 816,
  [SMALL_STATE(54)] = 829,
  [SMALL_STATE(55)] = 842,
  [SMALL_STATE(56)] = 855,
  [SMALL_STATE(57)] = 868,
  [SMALL_STATE(58)] = 881,
  [SMALL_STATE(59)] = 894,
  [SMALL_STATE(60)] = 907,
  [SMALL_STATE(61)] = 915,
  [SMALL_STATE(62)] = 923,
  [SMALL_STATE(63)] = 931,
  [SMALL_STATE(64)] = 939,
  [SMALL_STATE(65)] = 949,
  [SMALL_STATE(66)] = 957,
  [SMALL_STATE(67)] = 965,
  [SMALL_STATE(68)] = 973,
  [SMALL_STATE(69)] = 980,
  [SMALL_STATE(70)] = 987,
  [SMALL_STATE(71)] = 994,
  [SMALL_STATE(72)] = 1001,
  [SMALL_STATE(73)] = 1008,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2), SHIFT_REPEAT(17),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 5),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(45),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(45),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(38),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(57),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imap_repeat1, 2), SHIFT_REPEAT(64),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imap_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipair, 3, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mpair, 3, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cpon(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
