#pragma once
#include "Global.h"
/// <summary>
/// ”станавливаем 1 цвет консоли
/// https://en.wikipedia.org/wiki/ANSI_escape_code#Colors
/// </summary>
/// <param name="color">÷вет</param>
void setColor(int color);
/// <summary>
/// ”станавливаем 2 цвета консоли, дл€ фона и дл€ символа
/// </summary>
/// <param name="color1">÷вет1</param>
/// <param name="color2">÷вет2</param>
void setColor(int color1, int color2);
/// <summary>/// —брасываем все цвета консоли на стандартный/// </summary>
void resetColor();
/// <summary> ”станавливаем курсор в нужную позицию </summary>
/// <param name="x"></param>
/// <param name="y"></param>
void setCursorPosition(int x, int y);
void setCursorPosition(Coordinate xy);
Coordinate getCursorPosition();
Coordinate getConsoleSize();