#pragma once
struct Coordinate {
    int x; //Ряд
    int y; //Строка
};

struct Menu {
    Coordinate startPos;//Координаты начала места печати меню
    int countMenu; //Количество элементов в меню
    char** elemMenu = nullptr;//Элементы меню
    int n; //Номер выбранного элемента меню
};

struct ColorANSI3b {//Цвета ANSI 3бит 
    const int BlackBG = 40;   // Фоновый черный
    const int BlackFG = 30;   // Текстовый черный
    const int RedBG = 41;     // Фоновый красный
    const int RedFG = 31;     // Текстовый красный
    const int GreenBG = 42;   // Фоновый зеленый
    const int GreenFG = 32;   // Текстовый зеленый
    const int YellowBG = 43;  // Фоновый желтый
    const int YellowFG = 33;  // Текстовый желтый
    const int BlueBG = 44;    // Фоновый синий
    const int BlueFG = 34;    // Текстовый синий
    const int MagentaBG = 45; // Фоновый пурпурный
    const int MagentaFG = 35; // Текстовый пурпурный
    const int CyanBG = 46;    // Фоновый циановый
    const int CyanFG = 36;    // Текстовый циановый
    const int WhiteBG = 47;   // Фоновый белый
    const int WhiteFG = 37;   // Текстовый белый
};