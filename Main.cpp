
#include <iostream>
#include <Windows.h>
#include "cpp/H.h"
#include "cpp/Global.h"
#include "MSLib/MS.h"


using namespace std;
int main() {
	int arr[4][4];
	int n = 1; // Порядковый номер
	for (int r = 0; r < 4; r++)
		for (int c = 0; c < 4; c++)
			arr[r][c] = n++;
	drawMatrix(&arr[0][0], 4, 4,41);
	resetColor();
	drawEmptyRectangle(2 + (5 * 3), 2 + (2 * 3), 1, 4, 41);
	resetColor();
	setCursorPosition(1, 10);
}