#include <window.h>

Window::Window(int y, int x, int width, int height): 
  _y(y), _x(x), _height(height), _width(width) {
    
    _window = newwin(_height, _width, _y, _x);

}

void Window::Draw() {
  box(_window, '|', '-');
  touchwin(_window);
  wrefresh(_window);
}

void Window::Close() {
  delwin(_window);
  endwin();
}