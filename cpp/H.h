#pragma once
#include "Global.h"
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
/// <summary> ������������� ������ � ������ ������� </summary>
/// <param name="x"></param>
/// <param name="y"></param>
void setCursorPosition(int x, int y);
void setCursorPosition(Coordinate xy);
Coordinate getCursorPosition();
Coordinate getConsoleSize();