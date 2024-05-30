
#include "MyWindow.h"

#include <ncursesw/ncurses.h>

class Window
{
public:
	//Wnd(int height, int width, int start_y, int start_x) { window = create_window(height, width, start_y, start_x); }

	void onCreate(void);
	void onClose(void);
	void onPaintBackground(DeviceContext dc);
	void onPaint(DeviceContext dc);

	void onMouseMove(...);
	void onMouseLeftButtonDown();
	void onMouseRightButtonDown();

	/*void draw_box();
	void draw_line(int start_x, int start_y, int length, bool horizontal);
	void draw_rectangle(int start_x, int start_y, int height, int width);
	void draw_text(int start_x, int start_y, const char* text);
	void draw_menu(const char* options[], int num_options);*/

	void setInvalidateRectangle(Rectangle rect);

   private:
	//WINDOW* create_window(int height, int width, int start_y, int start_x);

	//WINDOW* window;
};
