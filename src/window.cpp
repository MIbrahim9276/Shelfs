#include <window.h>

Window::Window(int y, int x, int width, int height): 
  _y(y), _x(x), _height(height), _width(width) {
    
    window = newwin(_height, _width, _y, _x);
}

void Window::DrawBorder() {
  box(window, '|', '-');
  touchwin(window);
  wrefresh(window);
}

void Window::Close() {
  delwin(window);
  endwin();
}