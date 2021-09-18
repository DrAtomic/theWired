#include <ncurses.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "shellscript.h"


int main(){
	char mesg[] = "Enter Username: ";
	char str[80];
	int row, col;


	initscr();
	getmaxyx(stdscr,row,col);
	mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);

	getstr(str);
	mvprintw(LINES - 2, 0, "You Entered: %s", str);
	getch();
	endwin();

	system(SHELLSCRIPT);
	return 0;
};
