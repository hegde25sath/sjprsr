/*
 * Written by Sathvik Hegde, sathvik@purdue.edu
 *
 */

#include "common.h"
#include "sjprsr.h"
#include "parser.h"

// TODO: flesh out the flags
int main(int argc, const char* argv[]) {

  if (argc >= 2) {
     if (strcmp(argv[1], "--help") == 0) {
        help();
        return -1;
     }
     if (argc == 2) {
      char* source = read_file(argv[1]);
      int result = parse(source);
      free(source);
      return result;
     }
  } else {
    invalid_usage("no file supplied");
    return -1;
  }

  return 0;
}

/*
 * Reads file into a char* buf.
 */

char* read_file(const char* path_to_file) {
  FILE* fp = fopen(path_to_file, "rb");
  if (!fp) {
    perror("invalid file path");
    exit(EXIT_FAILURE);
  }
  fseek(fp, 0L, SEEK_END);
  size_t file_size = ftell(fp);
  rewind(fp);

  char* buf = malloc(file_size + 1);
  if (!buf) {
    perror("malloc failed");
    fclose(fp);
    exit(EXIT_FAILURE);
  }
  size_t bytes_read = fread(buf, sizeof(char), file_size, fp);
  if (bytes_read < file_size) {
    perror("Could not read file");
    fclose(fp);
    exit(EXIT_FAILURE);
  }
  buf[bytes_read] = '\0';
  fclose(fp);
  return buf;
} /* read_file() */

/*
 * Called whenever there is an invalid option/flag invoked
 */

void invalid_usage(const char* invalid_option) {
  printf("sjprsr: invalid option: `%s` \n", invalid_option);
  printf("Try `sjprsr --help` for more information.\n");
} /* invalid_usage() */

/*
 * This function prints usage help options after `sjprsr --help` called.
 */

void help() {
  printf("Usage: sjprser [OPTIONS]... [FILE]...\n");
} /* help() */
