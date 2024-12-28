# Written by Sathvik Hegde, sathvik@purdue.edu

SHELL = /bin/sh
.SUFFIXES:
.SUFFIXES: .c .o
INSTALL := install
INSTALL_PROGRAM := $(INSTALL)
INSTALL_DATA := ${INSTALL} -m 644

prefix := /usr/local
bindir := $(prefix)/bin

PROGNAME := sjprsr
srcdir := src
BUILDDIR := build

CC := gcc
CFLAGS := -O3 -Wall -Werror -Wextra -Wpedantic -g

.PHONY: all
all: $(PROGNAME)

.PHONY: clean
clean:
	-rm -f *.o $(PROGNAME)
	-rm -rf $(BUILDDIR)

.PHONY: install
install:
	$(INSTALL) -Dm0755 $(PROGNAME) $(DESTDIR)$(bindir)/$(PROGNAME)

.PHONY: uninstall
uninstall:
	-rm -rf $(DESTDIR)$(bindir)/$(PROGNAME)

sjprsr.o:
	$(CC) -c $(CFLAGS) sjprsr.c

$(PROGNAME): sjprsr.o
	$(CC) -o sjprsr $(CFLAGS) sjprsr.o
