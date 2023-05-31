#include <ncurses.h>

class Window {

  private:
    int _y, _x, _height, _width;

  public:
    WINDOW* window;

    Window();
    Window(int y, int x, int width, int height);
    void Draw();
    void Close();
    void Update();
};