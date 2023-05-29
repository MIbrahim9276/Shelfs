// Includes
#include <ncurses.h>

int main() {
  // Intialize ncurses
  initscr();

  // Enable character-a-time
  // Disable echoing
  // Capture special characters
  cbreak();
  noecho();
  keypad(stdscr, true);

  // Restore terminal settings
  endwin();

  return 0;
}