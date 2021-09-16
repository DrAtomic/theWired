#include <ncurses.h>
#include <stdlib.h>

int main(){
	initscr();
	addstr("hello");
	refresh();
	getch();
	endwin();
	return 0;
};
