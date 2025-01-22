#pragma once
struct Coordinate {
    int x; //Ряд
    int y; //Строка
};

struct ColorANSI3b {//Цвета ANSI 3бит 
    int BlackBG = 40;   // Фоновый черный
    int BlackFG = 30;   // Текстовый черный
    int RedBG = 41;     // Фоновый красный
    int RedFG = 31;     // Текстовый красный
    int GreenBG = 42;   // Фоновый зеленый
    int GreenFG = 32;   // Текстовый зеленый
    int YellowBG = 43;  // Фоновый желтый
    int YellowFG = 33;  // Текстовый желтый
    int BlueBG = 44;    // Фоновый синий
    int BlueFG = 34;    // Текстовый синий
    int MagentaBG = 45; // Фоновый пурпурный
    int MagentaFG = 35; // Текстовый пурпурный
    int CyanBG = 46;    // Фоновый циановый
    int CyanFG = 36;    // Текстовый циановый
    int WhiteBG = 47;   // Фоновый белый
    int WhiteFG = 37;   // Текстовый белый
};