#include "main.h"

int main() {

  init_curs();

  int screen_h, screen_w;
  getmaxyx(stdscr, screen_h, screen_w);

  Window book_window(0, 0, screen_w * 3 / 4, screen_h);

  Library lib(0, screen_w * 3 / 4, screen_w / 4, screen_h);
  Book dumpy("/pussy");
  lib.AddBook(dumpy);
  Book bitch("/dicks");
  lib.AddBook(bitch);

  lib.Display();

  while (getchar() != ESC) {
    lib.Display();

    book_window.Draw();
  }

  lib.Close();
  book_window.Close();

  return 0;

}