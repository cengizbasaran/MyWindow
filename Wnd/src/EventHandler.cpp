#include <iostream>
#include <windows.h>

class EventHandler {
public:
    static LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
        if (nCode >= 0) {
            if (wParam == WM_KEYDOWN) {
                KBDLLHOOKSTRUCT* kbdStruct = (KBDLLHOOKSTRUCT*)lParam;
                std::cout << "Key Pressed: " << kbdStruct->vkCode << std::endl;
            }
        }
        return CallNextHookEx(NULL, nCode, wParam, lParam);
    }

    static LRESULT CALLBACK MouseProc(int nCode, WPARAM wParam, LPARAM lParam) {
        if (nCode >= 0) {
            switch (wParam) {
            case WM_LBUTTONDOWN:
                std::cout << "Left mouse button down" << std::endl;
                break;
            case WM_RBUTTONDOWN:
                std::cout << "Right mouse button down" << std::endl;
                break;
            case WM_MOUSEMOVE:
                std::cout << "Mouse moved" << std::endl;
                break;
            default:
                break;
            }
        }
        return CallNextHookEx(NULL, nCode, wParam, lParam);
    }
};