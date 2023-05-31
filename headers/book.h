#include <string>

class Book {
  private:
    std::string path;
  
  public:
    int id;
    std::string title;

    Book(std::string path);
};