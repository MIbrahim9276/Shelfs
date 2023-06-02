#include <book.h>

Book::Book(std::string filepath) {
  int pos = filepath.find_last_of('/');
  std::string temp = filepath.substr(pos + 1);

  title = temp;
  path = filepath;
}

std::string Book::readFile(std::string path) {
  std::ifstream file;
  file.open(path);

  std::string line, contents = "";
  while (getline(file, line)) {
    contents += line;
    contents += "\n";
  }

  file.close();
  return contents;
}

void Book::Display(Window& window, std::string filepath) {
  wclear(window.window);
  window.DrawBorder();

  std::ifstream file;
  file.open(filepath);

  std::string line;
  int pos = 1;
  while (getline(file, line)) {
    mvwprintw(window.window, pos, 1, line.c_str());
    pos++;
  }

  file.close();

  wrefresh(window.window);
}