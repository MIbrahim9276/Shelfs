#include <library.h>
#include <string>

#define ESC 27
#define k 107
#define j 106

void init_curs() {
  initscr();
  noecho();
  cbreak();
  curs_set(0);
}