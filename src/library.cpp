#include <library.h>

Library::Library(int y, int x, int width, int height) {
  window = Window(y, x, width, height);
}

void Library::AddBook(Book& book) {
  shop[book.id] = book.title;
}

void Library::RemoveBook(Book& book) {
  shop.erase(book.id);
}

void Library::Display() {
  window.Draw();
  
  int i = 1;
  for (auto itr : shop) {
    mvwprintw(window.window, i, 1, itr.second.c_str());
    i++;
  }

  window.Update();
}

void Library::Close() {
  window.Close();
}