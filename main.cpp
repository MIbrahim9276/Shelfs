// Includes
#include <window.h>

int main() {
  // Start the window
  Window win;

  // Main loop
  while (win.PollEvents() != 27) {
    // Clear window
    win.clean();

    /*
    Main Loop Content
    */

    // Update the window
    win.Update();
  }
  
  // Exit the window
  win.Terminate();

  return 0;
}