#include <window.h>

Window::Window() {
  // Intialize ncurses
  initscr();

  // Disable echoing
  noecho();
}

void Window::clean() {
  clear();
}

void Window::Update() {
  refresh();
}

char Window::PollEvents() {
  return getch();
}

void Window::Terminate() {
  endwin();
}