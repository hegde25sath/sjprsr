# Sathvik's JSON Parser (`sjprsr`)

A JSON parser written in C adhering to [RFC 8259](https://datatracker.ietf.org/doc/html/rfc8259).
Returns VALID_JSON or INVALID_JSON (see `sjprsr.h`).

Work in progress.
Has only been tested on Linux (Fedora 41 x86-64).

## Development Tools
- C
- GNU make
- bash
- groff

## Usage

1. Clone the repository
2. `cd sjprsr && make && ./sjprsr [JSON file]`

Alternatively, run `make install` to install `sjprsr` in `/usr/local/bin/` by default.

## Acknowledgements

Makes use of nst's comprehensive [JSON parsing test suite.](https://github.com/nst/JSONTestSuite/tree/master)

## Additional Works Consulted
GNU C Preprocessor Manual
GNU C Libraray Reference Manual
GNU Make Manual
Crafting Interpreters, Nystrom
