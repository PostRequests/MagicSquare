#pragma once
#include "Global.h"
//ссылка на таблицу символов https://kvodo.ru/tablitsa-cp866.html

/*Draw*/

/// <summary>
/// Устанавливаем 1 цвет консоли
/// https://en.wikipedia.org/wiki/ANSI_escape_code#Colors
/// </summary>
/// <param name="color">Цвет</param>
void setColor(int color);
/// <summary>
/// Устанавливаем 2 цвета консоли, для фона и для символа
/// </summary>
/// <param name="color1">Цвет1</param>
/// <param name="color2">Цвет2</param>
void setColor(int color1, int color2);
/// <summary>/// Сбрасываем все цвета консоли на стандартный/// </summary>
void resetColor();
/// <summary>
/// Печатает линию
/// </summary>
/// <param name="s">Длинна линии</param>
/// <param name="symbol">Элемент заполнения</param>
/// <param name="color1">Цвет консоли ANSI</param>
/// <param name="color2">Цвет консоли ANSI</param>
void printRowChars(int s, char symbol, int color1 = 0, int color2 = 0) ;
/// <summary>
/// Печатает линию
/// </summary>
/// <param name="s">Длинна линии</param>
/// <param name="l">Первый символ в линии</param>
/// <param name="c">Символ который будет заполнять центр линии</param>
/// <param name="r">Последний символ линии</param>
/// <param name="color1">Цвет консоли ANSI</param>
/// <param name="color2">Цвет консоли ANSI</param>
void printRowChars(int s, char l, char c, char r, int color1 = 0, int color2 = 0);

void drawEmptyRectangle(int posX, int posY, int rows, int cols, int color = 0);
void drawArr(char* arr, int posX, int posY, int rows, int cols, int color1 = 0, int color2 = 0);

/*Win*/

/// <summary> Устанавливаем курсор в нужную позицию </summary>
/// <param name="x"></param>
/// <param name="y"></param>
void setCursorPosition(int x, int y);
/// <summary>
/// Устанавливаем курсор в нужную позицию
/// </summary>
/// <param name="xy">Структура координат курсора xy.x xy.y</param>
void setCursorPosition(Coordinate xy);
/// <summary>
/// Определяет в какой позиции сейчас находиться курсор
/// </summary>
/// <returns>Возвращает структуру координат Coordinate.x Coordinate.y</returns>
Coordinate getCursorPosition();
/// <summary>
/// Определяет текущий размер экрана в символах
/// </summary>
/// <returns>Возвращает структуру координат максимальных точек Coordinate.x/y</returns>
Coordinate getConsoleSize();
/// <summary>
/// Раскрывает консоль в полный экран
/// </summary>
void FullScreenMode();

/*Matrix*/

/// <summary>
/// Находит максимальный элемент в одномерном массиве
/// </summary>
/// <param name="arr">Указатель на первый элемент массива</param>
/// <param name="s">Количество элементов в массиве</param>
/// <returns>Максимальное значение, найденное в массиве</returns>
int getMax(int *arr, int s);
/// <summary>
/// Находит максимальный элемент в двумерном массиве
/// </summary>
/// <param name="arr">Указатель на первый элемент массива[0][0]</param>
/// <param name="rows">Количество строк в двумерном массиве</param>
/// <param name="cols">Количество столбцов в двумерном массиве</param>
/// <returns>Максимальное значение, найденное в массиве</returns>
int getMax(int *arr, int rows, int cols);
/// <summary>
/// Находит минимальный элемент в одномерном массиве
/// </summary>
/// <param name="arr">Указатель на первый элемент массива</param>
/// <param name="s">Количество элементов в массиве</param>
/// <returns>Минимальное значение, найденное в массиве</returns>
int getMin(int* arr, int s);
/// <summary>
/// Находит минимальный элемент в двумерном массиве
/// </summary>
/// <param name="arr">Указатель на первый элемент массива[0][0]</param>
/// <param name="rows">Количество строк в двумерном массиве</param>
/// <param name="cols">Количество столбцов в двумерном массиве</param>
/// <returns>Минимальное значение, найденное в массиве</returns>
int getMin(int* arr, int rows, int cols);
























