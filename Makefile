CC = gcc
LIBS = -lncurses

.PHONY: all run
all: hello run

hello: curses.c
	${CC} curses.c ${LIBS} -o tui

run: tui
	./tui

clean:
	rm tui
