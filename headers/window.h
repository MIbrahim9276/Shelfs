#pragma once
#include <ncurses.h>

class Window {
  public:
    Window();
    void Update();
    char PollEvents();
    void Terminate();
    void clean();
};