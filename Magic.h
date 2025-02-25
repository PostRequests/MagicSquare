#pragma once
#include "AllStruct.h"

/*Console*/

/// <summary> ������������� ������ � ������ ������� </summary>
/// <param name="x"> - ����������</param>
/// <param name="y">- ����������</param>
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
/// <returns>���������� ������� ������, ����������� ��� ����</returns>
char catchKey();
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

/*Text*/

/// <summary>
/// ��������� ���������� ������ �� ����� ������ � ������
/// </summary>
/// <param name="a">��������� �� ������ �����</param>
/// <param name="b">��������� �� ������ ��������</param>
void copyStr(char* copy, char* orig);
/// <summary>
/// ��������� ���������� ������ �� ����� ������ � ������
/// </summary>
/// <param name="a">��������� �� ������ �����</param>
/// <param name="b">��������� �� ������ ��������</param>
void copyStr(char* copy, const char* orig);
/// <summary>
/// ���������� ����� ������
/// </summary>
/// <param name="t">��������� �� ������ ������� �������������� ������</param>
/// <returns>���������� ����� ������</returns>
int getCharLen(const char* t);

/*Menu*/

/// <summary>
/// ��������� ����������� �� ����
/// </summary>
/// <param name="m">��������� ����</param>
/// <returns>���������� ����� �������� ���������� � ����</returns>
int scrollMenu(Menu m);
/// <summary>
/// ������� ��������� � ����
/// </summary>
/// <param name="m">��������� ����</param>
void clearMenu(Menu& m);
/// <summary>
/// �������� �������� ���� �� ������
/// </summary>
/// <param name="m">��������� ����</param>
void showItemMenu(Menu m);
/// <summary>
/// ����������� ��������� ����
/// </summary>
/// <param name="startPos">���������� ������ �������� ���� ����</param>
/// <param name="countMenu">���������� ��������� ����</param>
/// <param name="elemMenu">������ �� ������ ����</param>
/// <param name="n">�������, ��������� ������� ����</param>
/// <returns>���������� ��������� ����</returns>
Menu constructMenu(Coordinate startPos, int countMenu, const char* elemMenu[], int n);