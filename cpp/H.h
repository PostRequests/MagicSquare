#pragma once
#include "Global.h"
//������ �� ������� �������� https://kvodo.ru/tablitsa-cp866.html

/*Draw*/

/// <summary>
/// ������������� 1 ���� �������
/// https://en.wikipedia.org/wiki/ANSI_escape_code#Colors
/// </summary>
/// <param name="color">����</param>
void setColor(int color);
/// <summary>
/// ������������� 2 ����� �������, ��� ���� � ��� �������
/// </summary>
/// <param name="color1">����1</param>
/// <param name="color2">����2</param>
void setColor(int color1, int color2);
/// <summary>/// ���������� ��� ����� ������� �� �����������/// </summary>
void resetColor();
/// <summary>
/// �������� �����
/// </summary>
/// <param name="s">������ �����</param>
/// <param name="symbol">������� ����������</param>
/// <param name="color1">���� ������� ANSI</param>
/// <param name="color2">���� ������� ANSI</param>
void printRowChars(int s, char symbol, int color1 = 0, int color2 = 0) ;
/// <summary>
/// �������� �����
/// </summary>
/// <param name="s">������ �����</param>
/// <param name="l">������ ������ � �����</param>
/// <param name="c">������ ������� ����� ��������� ����� �����</param>
/// <param name="r">��������� ������ �����</param>
/// <param name="color1">���� ������� ANSI</param>
/// <param name="color2">���� ������� ANSI</param>
void printRowChars(int s, char l, char c, char r, int color1 = 0, int color2 = 0);

void drawEmptyRectangle(int posX, int posY, int rows, int cols, int color = 0);
void drawArr(char* arr, int posX, int posY, int rows, int cols, int color1 = 0, int color2 = 0);

/*Win*/

/// <summary> ������������� ������ � ������ ������� </summary>
/// <param name="x"></param>
/// <param name="y"></param>
void setCursorPosition(int x, int y);
/// <summary>
/// ������������� ������ � ������ �������
/// </summary>
/// <param name="xy">��������� ��������� ������� xy.x xy.y</param>
void setCursorPosition(Coordinate xy);
/// <summary>
/// ���������� � ����� ������� ������ ���������� ������
/// </summary>
/// <returns>���������� ��������� ��������� Coordinate.x Coordinate.y</returns>
Coordinate getCursorPosition();
/// <summary>
/// ���������� ������� ������ ������ � ��������
/// </summary>
/// <returns>���������� ��������� ��������� ������������ ����� Coordinate.x/y</returns>
Coordinate getConsoleSize();
/// <summary>
/// ���������� ������� � ������ �����
/// </summary>
void FullScreenMode();

/*Matrix*/

/// <summary>
/// ������� ������������ ������� � ���������� �������
/// </summary>
/// <param name="arr">��������� �� ������ ������� �������</param>
/// <param name="s">���������� ��������� � �������</param>
/// <returns>������������ ��������, ��������� � �������</returns>
int getMax(int *arr, int s);
/// <summary>
/// ������� ������������ ������� � ��������� �������
/// </summary>
/// <param name="arr">��������� �� ������ ������� �������[0][0]</param>
/// <param name="rows">���������� ����� � ��������� �������</param>
/// <param name="cols">���������� �������� � ��������� �������</param>
/// <returns>������������ ��������, ��������� � �������</returns>
int getMax(int *arr, int rows, int cols);
/// <summary>
/// ������� ����������� ������� � ���������� �������
/// </summary>
/// <param name="arr">��������� �� ������ ������� �������</param>
/// <param name="s">���������� ��������� � �������</param>
/// <returns>����������� ��������, ��������� � �������</returns>
int getMin(int* arr, int s);
/// <summary>
/// ������� ����������� ������� � ��������� �������
/// </summary>
/// <param name="arr">��������� �� ������ ������� �������[0][0]</param>
/// <param name="rows">���������� ����� � ��������� �������</param>
/// <param name="cols">���������� �������� � ��������� �������</param>
/// <returns>����������� ��������, ��������� � �������</returns>
int getMin(int* arr, int rows, int cols);
























