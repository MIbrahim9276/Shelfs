#include <ncurses.h>

class Window {

  private:
    WINDOW* _window;
    int _y, _x, _height, _width;

  public:
    Window(int y, int x, int width, int height);
    void Draw();
    void Close();
};