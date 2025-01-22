#include "H.h"
#include <iostream>

void setColor(int color) {
    std::cout << "\x1b[" << color << 'm';
}
void setColor(int color1, int color2) {
    std::cout << "\x1b[" << color1 << ';' << color2 << 'm';
}
void resetColor() {
    setColor(0);
}
