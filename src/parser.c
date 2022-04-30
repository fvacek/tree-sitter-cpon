#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LT = 1,
  anon_sym_COMMA = 2,
  anon_sym_LF = 3,
  anon_sym_GT = 4,
  anon_sym_COLON = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_i_LBRACE = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_content_token1 = 12,
  sym_escape_sequence = 13,
  sym_number = 14,
  sym_true = 15,
  sym_false = 16,
  sym_null = 17,
  sym_comment = 18,
  sym_document = 19,
  sym__value = 20,
  sym_meta = 21,
  sym_mpair = 22,
  sym_map = 23,
  sym_pair = 24,
  sym_imap = 25,
  sym_ipair = 26,
  sym_array = 27,
  sym_string = 28,
  sym_string_content = 29,
  aux_sym_meta_repeat1 = 30,
  aux_sym_meta_repeat2 = 31,
  aux_sym_map_repeat1 = 32,
  aux_sym_imap_repeat1 = 33,
  aux_sym_array_repeat1 = 34,
  aux_sym_string_content_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
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
  [anon_sym_LF] = anon_sym_LF,
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
  [anon_sym_LF] = {
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
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_i_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
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
    [sym_document] = STATE(98),
    [sym__value] = STATE(96),
    [sym_meta] = STATE(13),
    [sym_map] = STATE(96),
    [sym_imap] = STATE(96),
    [sym_array] = STATE(96),
    [sym_string] = STATE(96),
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
    [sym__value] = STATE(78),
    [sym_meta] = STATE(14),
    [sym_map] = STATE(78),
    [sym_imap] = STATE(78),
    [sym_array] = STATE(78),
    [sym_string] = STATE(78),
    [aux_sym_meta_repeat1] = STATE(9),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_i_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_null] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [3] = {
    [sym__value] = STATE(78),
    [sym_meta] = STATE(14),
    [sym_map] = STATE(78),
    [sym_imap] = STATE(78),
    [sym_array] = STATE(78),
    [sym_string] = STATE(78),
    [aux_sym_meta_repeat1] = STATE(9),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_i_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_null] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [4] = {
    [sym__value] = STATE(78),
    [sym_meta] = STATE(14),
    [sym_map] = STATE(78),
    [sym_imap] = STATE(78),
    [sym_array] = STATE(78),
    [sym_string] = STATE(78),
    [aux_sym_meta_repeat1] = STATE(9),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_i_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_null] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [5] = {
    [sym__value] = STATE(78),
    [sym_meta] = STATE(14),
    [sym_map] = STATE(78),
    [sym_imap] = STATE(78),
    [sym_array] = STATE(78),
    [sym_string] = STATE(78),
    [aux_sym_meta_repeat1] = STATE(9),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_i_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_null] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [6] = {
    [sym__value] = STATE(78),
    [sym_meta] = STATE(14),
    [sym_map] = STATE(78),
    [sym_imap] = STATE(78),
    [sym_array] = STATE(78),
    [sym_string] = STATE(78),
    [aux_sym_meta_repeat1] = STATE(9),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_i_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_null] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_i_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_meta,
    ACTIONS(53), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(43), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [38] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_i_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_meta,
    ACTIONS(57), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(33), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [76] = 5,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    ACTIONS(59), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [103] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_i_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_meta,
    ACTIONS(67), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(79), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [138] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_i_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_meta,
    ACTIONS(69), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(77), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [173] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_i_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_meta,
    ACTIONS(71), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(75), 5,
      sym__value,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [208] = 7,
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
    ACTIONS(73), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(100), 4,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [236] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_i_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    STATE(66), 4,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 8,
      anon_sym_LBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 8,
      anon_sym_LBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [292] = 9,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_GT,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_number,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(72), 1,
      sym_mpair,
    STATE(94), 1,
      sym_string,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 8,
      anon_sym_LBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 8,
      anon_sym_LBRACE,
      anon_sym_i_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [348] = 9,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(91), 1,
      anon_sym_GT,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(72), 1,
      sym_mpair,
    STATE(94), 1,
      sym_string,
  [376] = 8,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(76), 1,
      sym_pair,
    STATE(101), 1,
      sym_string,
  [401] = 8,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(76), 1,
      sym_pair,
    STATE(101), 1,
      sym_string,
  [426] = 8,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(76), 1,
      sym_pair,
    STATE(101), 1,
      sym_string,
  [451] = 8,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_number,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(72), 1,
      sym_mpair,
    STATE(94), 1,
      sym_string,
  [476] = 8,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(76), 1,
      sym_pair,
    STATE(101), 1,
      sym_string,
  [501] = 7,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym_number,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(80), 1,
      sym_ipair,
  [523] = 7,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(80), 1,
      sym_ipair,
  [545] = 7,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(80), 1,
      sym_ipair,
  [567] = 7,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(80), 1,
      sym_ipair,
  [589] = 7,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(76), 1,
      sym_pair,
    STATE(101), 1,
      sym_string,
  [611] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_meta_repeat1,
    STATE(31), 1,
      aux_sym_map_repeat1,
  [630] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(119), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [643] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_meta_repeat1,
    STATE(44), 1,
      aux_sym_array_repeat1,
  [662] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(129), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [675] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_string_content_token1,
    ACTIONS(137), 1,
      sym_escape_sequence,
    STATE(70), 1,
      aux_sym_string_content_repeat1,
    STATE(102), 1,
      sym_string_content,
  [694] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(139), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [707] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_meta_repeat1,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [726] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym_meta_repeat1,
    STATE(49), 1,
      aux_sym_meta_repeat2,
  [745] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(29), 1,
      aux_sym_meta_repeat1,
    STATE(57), 1,
      aux_sym_imap_repeat1,
  [764] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_meta_repeat1,
    STATE(31), 1,
      aux_sym_map_repeat1,
  [783] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym_meta_repeat1,
    STATE(31), 1,
      aux_sym_map_repeat1,
  [802] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_meta_repeat1,
    STATE(57), 1,
      aux_sym_imap_repeat1,
  [821] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_meta_repeat1,
    STATE(37), 1,
      aux_sym_array_repeat1,
  [840] = 6,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_meta_repeat1,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [859] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_meta_repeat1,
    STATE(39), 1,
      aux_sym_imap_repeat1,
  [878] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(183), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [891] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_meta_repeat1,
    STATE(41), 1,
      aux_sym_map_repeat1,
  [910] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      anon_sym_GT,
    STATE(20), 1,
      aux_sym_meta_repeat1,
    STATE(38), 1,
      aux_sym_meta_repeat2,
  [929] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(205), 1,
      anon_sym_GT,
    STATE(24), 1,
      aux_sym_meta_repeat1,
    STATE(49), 1,
      aux_sym_meta_repeat2,
  [948] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_string_content_token1,
    ACTIONS(137), 1,
      sym_escape_sequence,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_string_content_repeat1,
    STATE(93), 1,
      sym_string_content,
  [967] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_meta_repeat1,
    STATE(40), 1,
      aux_sym_map_repeat1,
  [986] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [999] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(219), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1012] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(223), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1025] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(227), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      sym_number,
    STATE(48), 1,
      sym_mpair,
    STATE(94), 1,
      sym_string,
  [1057] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_imap_repeat1,
    STATE(67), 1,
      aux_sym_meta_repeat1,
  [1076] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LF,
    ACTIONS(243), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1089] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(247), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1102] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_meta_repeat1,
    STATE(42), 1,
      aux_sym_imap_repeat1,
  [1121] = 6,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_meta_repeat1,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [1140] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(265), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1153] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(269), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1166] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LF,
    ACTIONS(273), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1179] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LF,
    ACTIONS(277), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1192] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LF,
    ACTIONS(281), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1205] = 6,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_number,
    STATE(9), 1,
      aux_sym_meta_repeat1,
    STATE(80), 1,
      sym_ipair,
  [1224] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_pair,
    STATE(101), 1,
      sym_string,
  [1240] = 5,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym_string_content_token1,
    ACTIONS(292), 1,
      sym_escape_sequence,
    STATE(69), 1,
      aux_sym_string_content_repeat1,
  [1256] = 5,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_string_content_token1,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(69), 1,
      aux_sym_string_content_repeat1,
  [1272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_pair,
    STATE(101), 1,
      sym_string,
  [1288] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      sym_number,
    STATE(45), 1,
      sym_ipair,
  [1312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_number,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_ipair,
  [1325] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1336] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1347] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1358] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1369] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1380] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [1407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COLON,
  [1421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [1435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [1442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [1449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [1463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [1470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [1477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
  [1484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COLON,
  [1491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [1505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
  [1512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
  [1519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [1526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [1540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 278,
  [SMALL_STATE(17)] = 292,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 348,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 401,
  [SMALL_STATE(23)] = 426,
  [SMALL_STATE(24)] = 451,
  [SMALL_STATE(25)] = 476,
  [SMALL_STATE(26)] = 501,
  [SMALL_STATE(27)] = 523,
  [SMALL_STATE(28)] = 545,
  [SMALL_STATE(29)] = 567,
  [SMALL_STATE(30)] = 589,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 630,
  [SMALL_STATE(33)] = 643,
  [SMALL_STATE(34)] = 662,
  [SMALL_STATE(35)] = 675,
  [SMALL_STATE(36)] = 694,
  [SMALL_STATE(37)] = 707,
  [SMALL_STATE(38)] = 726,
  [SMALL_STATE(39)] = 745,
  [SMALL_STATE(40)] = 764,
  [SMALL_STATE(41)] = 783,
  [SMALL_STATE(42)] = 802,
  [SMALL_STATE(43)] = 821,
  [SMALL_STATE(44)] = 840,
  [SMALL_STATE(45)] = 859,
  [SMALL_STATE(46)] = 878,
  [SMALL_STATE(47)] = 891,
  [SMALL_STATE(48)] = 910,
  [SMALL_STATE(49)] = 929,
  [SMALL_STATE(50)] = 948,
  [SMALL_STATE(51)] = 967,
  [SMALL_STATE(52)] = 986,
  [SMALL_STATE(53)] = 999,
  [SMALL_STATE(54)] = 1012,
  [SMALL_STATE(55)] = 1025,
  [SMALL_STATE(56)] = 1038,
  [SMALL_STATE(57)] = 1057,
  [SMALL_STATE(58)] = 1076,
  [SMALL_STATE(59)] = 1089,
  [SMALL_STATE(60)] = 1102,
  [SMALL_STATE(61)] = 1121,
  [SMALL_STATE(62)] = 1140,
  [SMALL_STATE(63)] = 1153,
  [SMALL_STATE(64)] = 1166,
  [SMALL_STATE(65)] = 1179,
  [SMALL_STATE(66)] = 1192,
  [SMALL_STATE(67)] = 1205,
  [SMALL_STATE(68)] = 1224,
  [SMALL_STATE(69)] = 1240,
  [SMALL_STATE(70)] = 1256,
  [SMALL_STATE(71)] = 1272,
  [SMALL_STATE(72)] = 1288,
  [SMALL_STATE(73)] = 1299,
  [SMALL_STATE(74)] = 1312,
  [SMALL_STATE(75)] = 1325,
  [SMALL_STATE(76)] = 1336,
  [SMALL_STATE(77)] = 1347,
  [SMALL_STATE(78)] = 1358,
  [SMALL_STATE(79)] = 1369,
  [SMALL_STATE(80)] = 1380,
  [SMALL_STATE(81)] = 1391,
  [SMALL_STATE(82)] = 1399,
  [SMALL_STATE(83)] = 1407,
  [SMALL_STATE(84)] = 1414,
  [SMALL_STATE(85)] = 1421,
  [SMALL_STATE(86)] = 1428,
  [SMALL_STATE(87)] = 1435,
  [SMALL_STATE(88)] = 1442,
  [SMALL_STATE(89)] = 1449,
  [SMALL_STATE(90)] = 1456,
  [SMALL_STATE(91)] = 1463,
  [SMALL_STATE(92)] = 1470,
  [SMALL_STATE(93)] = 1477,
  [SMALL_STATE(94)] = 1484,
  [SMALL_STATE(95)] = 1491,
  [SMALL_STATE(96)] = 1498,
  [SMALL_STATE(97)] = 1505,
  [SMALL_STATE(98)] = 1512,
  [SMALL_STATE(99)] = 1519,
  [SMALL_STATE(100)] = 1526,
  [SMALL_STATE(101)] = 1533,
  [SMALL_STATE(102)] = 1540,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(30),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(30),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imap, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_repeat2, 2), SHIFT_REPEAT(24),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2), SHIFT_REPEAT(24),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_repeat2, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imap, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_imap_repeat1, 2), SHIFT_REPEAT(67),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imap_repeat1, 2), SHIFT_REPEAT(67),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_imap_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imap, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imap, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(69),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(69),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mpair, 3, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mpair, 3, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipair, 3, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipair, 3, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imap_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [337] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
