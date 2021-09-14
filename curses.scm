#!/usr/bin/guile
!#

(use-modules (ncurses curses))

(define stdscr (initscr))
(addstr stdscr "hello world")
(refresh stdscr)
(getch stdscr)
(endwin)
