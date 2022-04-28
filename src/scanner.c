#include <stdbool.h>
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

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead) && lexer->lookahead != '\n') {
      skip(lexer);
    }

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
}

static bool scan_pair_separator(TSLexer *lexer) {
  lexer->result_symbol = PAIR_SEPARATOR;
  lexer->mark_end(lexer);

  if (!scan_whitespace_and_comments(lexer)) 
    return false;
  if (lexer->lookahead == ',') return true;
  if (lexer->lookahead == '\n') return true;
  return false;
}

bool tree_sitter_cpon_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[PAIR_SEPARATOR]) {
    bool ret = scan_pair_separator(lexer);
    return ret;
  }
  return false;
}
