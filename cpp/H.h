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
void drawRowChars(int s, char symbol, int color1, int color2 = 0) ;
void drawRpwChars(int s, char l, char c, char r, int color1, int color2 = 0);
/*Win*/
/// <summary> ������������� ������ � ������ ������� </summary>
/// <param name="x"></param>
/// <param name="y"></param>
void setCursorPosition(int x, int y);
void setCursorPosition(Coordinate xy);
Coordinate getCursorPosition();
Coordinate getConsoleSize();
void FullScreenMode();