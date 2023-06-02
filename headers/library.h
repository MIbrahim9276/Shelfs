#include <map>
#include <book.h>

class Library : public Window {
  private:
    int arrow_pos = 0;

  public:
    std::map<std::string, std::string> shop;

    Library(int y, int x, int width, int height);
    void AddBook(Book& book);
    void RemoveBook(Book& book);
    void UpdateArrow(char input);
    void Display();
    std::string SelectBook();
};