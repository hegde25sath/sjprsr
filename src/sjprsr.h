/**
 * Written by Sathvik Hegde, sathvik@purdue.edu
 */

#ifndef SJPRSR_H_SEEN
#define SJPRSR_H_SEEN

/* Constant definitions */
#define INVALID_JSON (0)
#define VALID_JSON (1)
// #define MAX_CHARS (10000)

/* Exit codes */
#define WRONG_ARGS (2)
#define INVALID_OPTION (3)

/* Structure declarations */

typedef enum token_type {
  TOKEN_BEGIN_ARRAY,
  TOKEN_BEGIN_OBJECT,
  TOKEN_END_ARRAY,
  TOKEN_END_OBJECT,
  TOKEN_NAME_SEPARATOR,
  TOKEN_VALUE_SEPARATOR,
  TOKEN_FALSE,
  TOKEN_NIL,
  TOKEN_TRUE,
  TOKEN_OBJECT,
  TOKEN_ARRAY,
  TOKEN_NUMBER,
  TOKEN_STRING,
  TOKEN_EOF
} token_type;

typedef struct token {
  token_type type;
  int start;
  int end;
} token;


/* Function prototypes */
void help();
void invalid_usage(const char* invalid_option);
char* read_file(const char* );

#endif /* !SJPRSR_H_SEEN */
