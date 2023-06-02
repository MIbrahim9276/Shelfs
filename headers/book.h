#include <string>
#include <window.h>
#include <fstream>

class Book {
  public:
    std::string title, path;

    static void Display(Window& window, std::string filepath);
    static std::string readFile(std::string path);

    Book(std::string path);
};