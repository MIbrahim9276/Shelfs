#include <library.h>

#define ESC 27

void init_curs() {
  initscr();
  noecho();
  cbreak();
  curs_set(0);
}