#include "H.h"
#include "Global.h"

#include <iostream>
#include <Windows.h>


void setCursorPosition(int x, int y) {
    std::cout << "\033[" << y << ";" << x << "H";
}

void setCursorPosition(Coordinate xy) {
    std::cout << "\033[" << xy.y << ";" << xy.x << "H";
}

Coordinate getCursorPosition() {
    Coordinate r; //Структура координат
    CONSOLE_SCREEN_BUFFER_INFO csbi; // Создаем структуру для хранения координат курсора
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Получаем информацию о текущем состоянии консоли
    if (GetConsoleScreenBufferInfo(hConsole, &csbi)) {
        r.x = csbi.dwCursorPosition.X;
        r.y = csbi.dwCursorPosition.Y;
    }
    else {
        r.x = -1;
        r.y = -1;
    }
    return r;
}

Coordinate getConsoleSize() {
    Coordinate r;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (GetConsoleScreenBufferInfo(hConsole, &csbi)) {
        r.x = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        r.y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
    else {
        r.x = -1;
        r.y = -1;
    }
    return r;
}
void FullScreenMode() {
    SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
}