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

int start = 0;
int current = 0;
int line = 1;

// TODO: flesh out the flags
int main(int argc, char** argv) {
  if (argc >= 2) {
    if (strcmp(argv[1], "--help") == 0) {
      help();
      return -1;
    }
  }
  //TODO: validation of input json file - correct extension, etc
  parse(argv[1]);
}

/*
 * This is the main driver function behind `sjprsr`.
 * Returns VALID_JSON/INVALID_JSON according to RFC 8259.
 */

int parse(char* file) {
  FILE* fp = fopen(file, "r");
  if (!fp) {
    perror("invalid file path");
    exit(EXIT_FAILURE);
  }
  
  return VALID_JSON;
} /* parse() */

/*
 * Called whenever there is an invalid option/flag invoked
 */

void invalid_usage() {
  printf("sjprsr: invalid option \n");
  printf("Try `sjprsr --help` for more information.\n");
} /* invalid_usage() */

/*
 * This function prints usage help options after `sjprsr --help` called.
 */

void help() {
  printf("Usage: sjprser [OPTIONS]... [FILE]...\n");
} /* help() */
