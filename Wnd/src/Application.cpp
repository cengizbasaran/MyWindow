#include <iostream>
#include <Wnd.h>

int main() {
	Wnd* wnd = new Wnd(50, 100, 0, 0);
	wnd->draw_box();
	wnd->draw_line(1, 1, 10, true);
	wnd->draw_line(1, 2, 10, false);
	wnd->draw_rectangle(5, 5, 5, 10);
	wnd->draw_text(2, 15, "Hello, ncurses!");

	const char* options[] = {"Option 1", "Option 2", "Option 3"};
	wnd->draw_menu(options, 3);

	std::cout << "Hello...\n";
}

class Application {
	virtual void dummy() = 0;
};