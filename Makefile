CC = gcc
LIBS = -lncurses

.PHONY: all run
all: hello run

hello: curses.c
	${CC} curses.c ${LIBS} -o curses

run: curses
	./curses

clean:
	rm curses
