#include <window.h>

void init_curs() {
  initscr();
  noecho();
  cbreak();
  curs_set(0);
}