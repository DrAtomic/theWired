CC = gcc
LIBS = -lncurses

.PHONY: all run
all: hello run

hello: theWired.c
	${CC} theWired.c ${LIBS} -o theWired

run: theWired
	./theWired

clean:
	rm theWired
