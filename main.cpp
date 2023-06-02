#include "main.h"

int main() {

  init_curs();

  int screen_h, screen_w;
  getmaxyx(stdscr, screen_h, screen_w);

  Window book_window(0, 0, screen_w * 3 / 4, screen_h);
  book_window.DrawBorder();

  Library lib(0, screen_w *3 / 4, screen_w / 4, screen_h);

  Book b1("./Book1.txt");
  Book b2("./Book2.txt");
  Book b3("./Book3.txt");

  lib.AddBook(b1);
  lib.AddBook(b2);
  lib.AddBook(b3);
  
  lib.Display();

  std::string current_book = "";

  char input = getchar();
  while (input != ESC) {
    lib.UpdateArrow(input);
    lib.Display();

    if (input == 'r') {
      current_book = lib.SelectBook();
    }

    Book::Display(book_window, current_book);

    input = getchar();
  }

  lib.Close();
  book_window.Close();

  return 0;

}