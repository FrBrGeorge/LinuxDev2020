#include <curses.h>
#include <locale.h>

void main ()
{
	setlocale(LC_ALL, "");
	initscr ();
	move (LINES/2 - 1, COLS/2 - 4);
	addstr ("Привет, мир!");
	getch ();
	endwin ();
}
