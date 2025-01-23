#include "H.h"
#include <iostream>

void setColor(int color) {
    std::cout << "\x1b[" << color << 'm';
}

void setColor(int color1, int color2) {
    std::cout << "\x1b[" << color1 << ';' << color2 << 'm';
}

void resetColor() { setColor(0); }
void drawRowChars(int s, char symbol, int color1 ,int color2) {
    if (color1)
        ((color2) ? setColor(color1, color2) : setColor(color1));
    for (int i = 0; i < s; i++)
        std::cout << symbol;
}

void drawRowChars(int s, char l, char c, char r, int color1, int color2) {
    if (color1)
        ((color2) ? setColor(color1, color2) : setColor(color1));
    std::cout << l;
    for (int i = 1; i < s - 1; i++)
        std::cout << c;
    std::cout << r;
}

void drawEmptyRectangle(int posX, int posY, int rows, int cols) {
    setCursorPosition(posX, posY);
    for (int r = 0; r < rows; r++) {
        drawRowChars(cols, ' ');
        setCursorPosition(posX, posY + r);
    }
        
}