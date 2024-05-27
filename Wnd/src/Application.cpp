#include <iostream>
#include <Wnd.h>

HHOOK keyboardHook;
HHOOK mouseHook;

int main() {
	keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, InputHandler::KeyboardProc, NULL, 0);
	mouseHook = SetWindowsHookEx(WH_MOUSE_LL, InputHandler::MouseProc, NULL, 0);

	if (!keyboardHook || !mouseHook) {
		std::cerr << "Failed to install hook!" << std::endl;
		return 1;
	}

	Wnd* wnd = new Wnd(50, 100, 0, 0);
	wnd->draw_box();
	wnd->draw_line(1, 1, 10, true);
	wnd->draw_line(1, 2, 10, false);
	wnd->draw_rectangle(5, 5, 5, 10);
	wnd->draw_text(2, 15, "Hello, ncurses!");

	const char* options[] = {"Option 1", "Option 2", "Option 3"};
	wnd->draw_menu(options, 3);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	UnhookWindowsHookEx(keyboardHook);
	UnhookWindowsHookEx(mouseHook);

	std::cout << "Hello...\n";
 	return 0;
}

class Application {
	virtual void dummy() = 0;
};