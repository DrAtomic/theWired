#!/usr/bin/guile
!#
(use-modules (ncurses curses))

(define (login a_thingy)
  (addstr a_thingy "please login\n")
  (refresh a_thingy)
  (getch a_thingy))

(define stdscr (initscr))
(login stdscr)
(endwin)
