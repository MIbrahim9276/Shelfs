#include <book.h>

using namespace std;

Book::Book(std::string path) {
  int pos = path.find_last_of('/');
  string temp = path.substr(pos + 1);

  title = temp;
}