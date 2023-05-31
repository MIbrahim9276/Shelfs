#include <window.h>
#include <map>
#include <book.h>

class Library {
  public:
    std::map<int, std::string> shop;
    Window window;

    Library(int y, int x, int width, int height);
    void AddBook(Book& book);
    void RemoveBook(Book& book);
    void Display();
    void Close();
};