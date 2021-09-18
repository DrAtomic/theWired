#include <ncurses.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "shellscript.h"

//TODO: have them enter username and passwd
//TODO: ssh into server

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
	// this is just for debugging the script will be run on the server	
	system(SHELLSCRIPT);
	return 0;
};
