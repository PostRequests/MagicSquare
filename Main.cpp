
#include <iostream>
#include <Windows.h>
#include "cpp/H.h"
#include "cpp/Global.h"

#include <vector>

using namespace std;
int main() {
	ColorANSI3b col;
	setColor(col.CyanBG);
	drawEmptyRectangle(5, 5, 4, 5);
	resetColor();
}