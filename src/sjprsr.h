/**
 * Written by Sathvik Hegde, sathvik@purdue.edu
 */

#ifndef SJPRSR_H_SEEN
#define SJPRSR_H_SEEN

/* Constant definitions */
#define INVALID_JSON (0)
#define VALID_JSON (1)

/* Exit codes */
#define WRONG_ARGS (2)
#define INVALID_OPTION (3)

/* Structure declarations */

typedef enum token_type {
  BEGIN_ARRAY,
  BEGIN_OBJECT,
  END_ARRAY,
  END_OBJECT,
  NAME_SEPARATOR,
  VALUE_SEPARATOR,
  FALSE,
  NIL,
  TRUE,
  OBJECT,
  ARRAY,
  NUMBER,
  STRING,
  ENDFILE
} token_type;

typedef struct token {
  token_type type;
  char* lexeme;
  int line;
} token;


/* Function prototypes */
void help();
int parse(char* file);

#endif /* !SJPRSR_H_SEEN */
