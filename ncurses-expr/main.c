#include <ncurses.h>

int main(void) {
    initscr();
    raw();
    printw("Hello World!");
    getch();
    endwin();

    return 0;
}
