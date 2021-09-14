.PHONY: all
all: hello
CC = /usr/bin/guile

hello: curses.scm
	${CC} curses.scm
