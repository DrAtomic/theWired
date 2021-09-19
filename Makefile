CC = gcc
LIBS = -lncurses

# TODO: learn makefiles
# i want to be able to compile all the files in the src and 
# and include all the files in the include dir
.PHONY: all run
all: login run

login: src/login.c
	${CC}  src/login.c ${LIBS} -o login

run: login
	./login

clean:
	rm login
