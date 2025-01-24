#include "H.h"
#include "Global.h"
#include <iostream>


void printArrBorder(char  *arr, int rows, int cols) {
	BorderCP866 bord;
	printRowChars(cols, bord.LT2, bord.H2, bord.RT2);
}