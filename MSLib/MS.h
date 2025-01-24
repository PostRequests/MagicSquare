#pragma once
#include "../cpp/H.h"
#include "../cpp/Global.h"

const ColorANSI3b ColorA;
const BorderCP866 cBord;

void drawMatrix(int* arr, int rows, int cols, int posX, int posY, int color = 0);
void drawMatrix(int* arr, int rows, int cols, Coordinate XY, int color);
void drawMatrix(int* arr, int rows, int cols, int color);