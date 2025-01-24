#include <iostream>
#include "../cpp/Global.h"
#include "MS.h"


void pBoard(int l, int cols,  char b1, char b2, char b3 , char b4) {
	//Верхний бордюр
	std::cout << b1;
	for (int i = 0; i < cols; i++) {
		printRowChars(l, b2);
		std::cout << ((i == cols - 1) ? b3 : b4);
	}
}

void printCentered(int num, int width) {
	int lNum = getNumLength(num);
	int spacesL = width / 2 - lNum / 2;
	int spacesR = width - spacesL - lNum;
	printRowChars(spacesL, ' ');
	std::cout << num;
	printRowChars(spacesR, ' ');
}

void endLineToDwMx(int &rowOffset, int posX, int posY) {
	if (posX)
		setCursorPosition(posX, posY + ++rowOffset);
	else
		std::cout << std::endl;
}

void drawMatrix(int *arr, int rows, int cols, int posX, int posY, int color) {
	int lNum = getNumLength(getMax(arr, rows, cols)) +2; //длинна максимального числа без учета знака (-)
	int rowOffset = 0;
		setColor(color);
	if (posX)
		setCursorPosition(posX, posY);
	//Верхний бордюр
	pBoard(lNum, cols, cBord.LT2, cBord.H2, cBord.RT2, cBord.UH2);
	endLineToDwMx(rowOffset, posX, posY);
	for (int r = 0; r < rows; r++)
	{
		std::cout << cBord.V2;
		for (int c = 0; c < cols; c++){
			printCentered(*(arr + r * cols + c), lNum);
			std::cout << cBord.V2;
		}
		if (r != rows - 1) {
			endLineToDwMx(rowOffset, posX, posY);
			//Центральный бордюр
			pBoard(lNum, cols, cBord.LV2, cBord.H2, cBord.RV2, cBord.C2);
		}
		endLineToDwMx(rowOffset, posX, posY);
	}
	//Нижний бордюр
	pBoard(lNum, cols, cBord.LD2, cBord.H2, cBord.RD2, cBord.DH2);
}

void drawMatrix(int* arr, int rows, int cols, Coordinate XY, int color) {
	drawMatrix(arr, rows, cols, XY.x, XY.y, color);
}

void drawMatrix(int* arr, int rows, int cols, int color) {
	drawMatrix(arr, rows, cols, 0, 0, color);
}