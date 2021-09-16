#include <ncurses.h>
#include <stdlib.h>

void login(){
  addstr("plz enter credetnials\n");
  refresh();
  getchar();
};

int main(){
	initscr();
	login();
	endwin();
	return 0;
};
