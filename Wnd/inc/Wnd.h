
#include "DC.h"
#include <ncursesw/ncurses.h>

class Wnd {
   public:
	Wnd(int height, int width, int start_y, int start_x) { window = create_window(height, width, start_y, start_x); }

	void onPaintBackground(DC dc);
	void onPaint(DC dc);

	void onMouseMove(...);
	void onMouseLeftButtonDown();
	void onMouseRightButtonDown();

	void draw_box();
	void draw_line(int start_x, int start_y, int length, bool horizontal);
	void draw_rectangle(int start_x, int start_y, int height, int width);
	void draw_text(int start_x, int start_y, const char* text);
	void draw_menu(const char* options[], int num_options);

   private:
	WINDOW* create_window(int height, int width, int start_y, int start_x);

	WINDOW* window;
};
