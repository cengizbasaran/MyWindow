#include "Wnd.h"

WINDOW* Wnd::create_window(int height, int width, int start_y, int start_x) {
	initscr();
	noecho();
	cbreak();
	curs_set(0);
	WINDOW* win = newwin(height, width, start_y, start_x);
	box(win, 0, 0);
	// wrefresh(window);
	refresh();
	return win;
}

void Wnd::draw_box() {
	box(window, 0, 0);
	wrefresh(window);
}

void Wnd::draw_line(int start_x, int start_y, int length, bool horizontal) {
	if (horizontal) {
		for (int i = 0; i < length; ++i) {
			mvwaddch(window, start_y, start_x + i, ACS_HLINE);
		}
	} else {
		for (int i = 0; i < length; ++i) {
			mvwaddch(window, start_y + i, start_x, ACS_VLINE);
		}
	}
	wrefresh(window);
}

void Wnd::draw_rectangle(int start_x, int start_y, int height, int width) {
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) {
			if (i == 0 || i == height - 1) {
				mvwaddch(window, start_y + i, start_x + j, ACS_HLINE);
			} else if (j == 0 || j == width - 1) {
				mvwaddch(window, start_y + i, start_x + j, ACS_VLINE);
			}
		}
	}
	wrefresh(window);
}

void Wnd::draw_text(int start_x, int start_y, const char* text) {
	mvwprintw(window, start_y, start_x, "%s", text);
	wrefresh(window);
	refresh();
}

void Wnd::draw_menu(const char* options[], int num_options) {
	int highlight = 0;
	int choice;
	keypad(window, TRUE);
	while (1) {
		for (int i = 0; i < num_options; ++i) {
			if (i == highlight) {
				wattron(window, A_REVERSE);
			}
			mvwprintw(window, i + 1, 1, options[i]);
			if (i == highlight) {
				wattroff(window, A_REVERSE);
			}
		}
		choice = wgetch(window);
		switch (choice) {
			case KEY_UP:
				highlight = (highlight == 0) ? num_options - 1 : highlight - 1;
				break;
			case KEY_DOWN:
				highlight = (highlight == num_options - 1) ? 0 : highlight + 1;
				break;
			default:
				break;
		}
		if (choice == 10) {
			break;
		}
	}
}