
#include <iostream>
#include <Windows.h>
#include "cpp/H.h"
#include "cpp/Global.h"
int main()
{
    Coordinate a = getConsoleSize();
    std::cout << a.x << "  " << a.y;
    Sleep(2000);
    setCursorPosition(10, 20);
    a = getConsoleSize();
    std::cout << a.x << "  " << a.y;
    
}
