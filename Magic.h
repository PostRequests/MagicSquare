#pragma once
#include "AllStruct.h"

/*Console*/

/// <summary> Устанавливаем курсор в нужную позицию </summary>
/// <param name="x"> - координата</param>
/// <param name="y">- координата</param>
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
/// <returns>Возвращает нажатый символ, необходимый для игры</returns>
char catchKey();
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

/*Text*/

/// <summary>
/// Позволяет копировать данные из одной строки в другую
/// </summary>
/// <param name="a">Указатель на строку копию</param>
/// <param name="b">Указатель на строку оригинал</param>
void copyStr(char* copy, char* orig);
/// <summary>
/// Позволяет копировать данные из одной строки в другую
/// </summary>
/// <param name="a">Указатель на строку копию</param>
/// <param name="b">Указатель на строку оригинал</param>
void copyStr(char* copy, const char* orig);
/// <summary>
/// Определяет длину текста
/// </summary>
/// <param name="t">Указатель на первый элемент анализируемого текста</param>
/// <returns>Возвращает длину строки</returns>
int getCharLen(const char* t);

/*Menu*/

/// <summary>
/// Анимирует перемещение по меню
/// </summary>
/// <param name="m">Структура меню</param>
/// <returns>Возвращает номер элемента выбранного в меню</returns>
int scrollMenu(Menu m);
/// <summary>
/// Очищает указатели в меню
/// </summary>
/// <param name="m">Структура меню</param>
void clearMenu(Menu& m);
/// <summary>
/// Печатает элементы меню на экране
/// </summary>
/// <param name="m">Структура меню</param>
void showItemMenu(Menu m);
/// <summary>
/// Конструктор структуры меню
/// </summary>
/// <param name="startPos">Координаты левого верхнего угла меню</param>
/// <param name="countMenu">Количество элементов меню</param>
/// <param name="elemMenu">Ссылка на массив меню</param>
/// <param name="n">Текущий, выбранный элемент меню</param>
/// <returns>Возвращает созданное меню</returns>
Menu constructMenu(Coordinate startPos, int countMenu, const char* elemMenu[], int n);