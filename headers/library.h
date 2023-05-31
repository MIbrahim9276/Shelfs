#include <window.h>
#include <set>
#include <book.h>

class Library {

  public:
    std::set<int> ids;
    Window window;

    Library(int y, int x, int width, int height);
    void AddBook(Book& book);
    void RemoveBook(Book& book);
    void Display();
};