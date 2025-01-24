#pragma once
#include "../cpp/H.h"
#include "../cpp/Global.h"

const ColorANSI3b ColorA;
const BorderCP866 cBord;

void drawMatrix(int* arr, int rows, int cols, int posX = 0, int posY = 0, int color = 0);
void drawMatrix(int* arr, int rows, int cols, Coordinate XY, int color);