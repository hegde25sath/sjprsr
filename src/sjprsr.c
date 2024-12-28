/*
 * Written by Sathvik Hegde, sathvik@purdue.edu
 *
 */

#include "sjprsr.h"

#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
  BEGIN_ARRAY, // [
  BEGIN_OBJECT, // {
  END_ARRAY,
  END_OBJECT,
  NAME_SEPARATOR, // :
  VALUE_SEPARATOR, // ,
  FALSE,
  NIL,
  TRUE,
  OBJECT,
  ARRAY,
  NUMBER,
  STRING
}

