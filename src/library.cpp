#include <library.h>

Library::Library(int y, int x, int width, int height) {
  window = Window(y, x, width, height);
  Display();
}

void Library::AddBook(Book& book) {
  ids.insert(book.id);
}

void Library::RemoveBook(Book& book) {
  ids.erase(book.id);
}

void Library::Display() {
  window.Draw();
  mvwprintw(window.window, 1, 1, "test");
  window.Update();
}