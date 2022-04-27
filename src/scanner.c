#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  PAIR_SEPARATOR,
};

void *tree_sitter_cpon_external_scanner_create() { return NULL; }
void tree_sitter_cpon_external_scanner_destroy(void *p) {}
void tree_sitter_cpon_external_scanner_reset(void *p) {}
unsigned tree_sitter_cpon_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_pon_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_comment(TSLexer *lexer) {
  if (lexer->lookahead == '/') {
    skip(lexer);

    if (lexer->lookahead == '/') {
      skip(lexer);
      while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
        skip(lexer);
      }
    } else if (lexer->lookahead == '*') {
      skip(lexer);
      while (lexer->lookahead != 0) {
        if (lexer->lookahead == '*') {
          skip(lexer);
          if (lexer->lookahead == '/') {
            skip(lexer);
            break;
          }
        } else {
          skip(lexer);
        }
      }
    } else {
      return false;
    }
  } else {
    return true;
  }
}

static bool scan_pair_separator(TSLexer *lexer) {
  lexer->result_symbol = PAIR_SEPARATOR;
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->lookahead == 0) return false;
    if (lexer->lookahead == '}') return true;
    // if (lexer->is_at_included_range_start(lexer)) return true;
    if (lexer->lookahead == '\n') break;
    if (!iswspace(lexer->lookahead)) return false;
    skip(lexer);
  }

  skip(lexer);

  if (!scan_comment(lexer)) return false;

  switch (lexer->lookahead) {
    case ',':
    case '.':
    case ':':
    case ';':
    case '*':
    case '%':
    case '>':
    case '<':
    case '=':
    case '[':
    case '(':
    case '?':
    case '^':
    case '|':
    case '&':
    case '/':
      return false;

    // Insert a comma before `--` and `++`, but not before binary `+` or `-`.
    case '+':
      skip(lexer);
      return lexer->lookahead == '+';
    case '-':
      skip(lexer);
      return lexer->lookahead == '-';

    // Don't insert a comma before `!=`, but do insert one before a unary `!`.
    case '!':
      skip(lexer);
      return lexer->lookahead != '=';

    // Don't insert a comma before `in` or `instanceof`, but do insert one
    // before an identifier.
    case 'i':
      skip(lexer);

      if (lexer->lookahead != 'n') return true;
      skip(lexer);

      if (!iswalpha(lexer->lookahead)) return false;

      for (unsigned i = 0; i < 8; i++) {
        if (lexer->lookahead != "stanceof"[i]) return true;
        skip(lexer);
      }

      if (!iswalpha(lexer->lookahead)) return false;
      break;
  }

  return true;
}

bool tree_sitter_cpon_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (valid_symbols[PAIR_SEPARATOR]) {
    bool ret = scan_pair_separator(lexer);
    return ret;
  }
  return false;
}
