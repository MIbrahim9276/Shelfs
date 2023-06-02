#include <library.h>

Library::Library(int y, int x, int width, int height) :
Window(y, x, width, height) {}

void Library::AddBook(Book& book) {
  shop[book.title] = book.path;
}

void Library::RemoveBook(Book& book) {
  shop.erase(book.title);
}

void Library::Display() {
  wclear(window);

  int i = 1;
  for (auto itr : shop) {
    mvwprintw(window, i, 3, itr.first.c_str());
    i++;
  }
  
  mvwprintw(window, arrow_pos + 1, 2, ">");

  DrawBorder();
}

void Library::UpdateArrow(char input) {
  if (input == 'k') {
    arrow_pos++;
  } else if (input == 'j') {
    arrow_pos--;
    if (arrow_pos < 0) arrow_pos = shop.size() - 1;
  }

  arrow_pos %= shop.size();
}

std::string Library::SelectBook() {
  auto itr = shop.begin();
  for (int i = 0; i < arrow_pos; i++) itr++;
  return itr->second;
}