#include "main.h"

int main() {

  init_curs();

  int screen_h, screen_w;
  getmaxyx(stdscr, screen_h, screen_w);

  Window lib_window(0, screen_w * 3 / 4, screen_w / 4, screen_h);
  Window book_window(0, 0, screen_w * 3 / 4, screen_h);

  lib_window.Draw();
  book_window.Draw();

  getchar();

  lib_window.Close();
  book_window.Close();

  return 0;

}