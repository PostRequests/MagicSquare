#pragma once
struct Coordinate {
    int x; //���
    int y; //������
};

struct ColorANSI3b {//����� ANSI 3��� 
    int BlackBG = 40;   // ������� ������
    int BlackFG = 30;   // ��������� ������
    int RedBG = 41;     // ������� �������
    int RedFG = 31;     // ��������� �������
    int GreenBG = 42;   // ������� �������
    int GreenFG = 32;   // ��������� �������
    int YellowBG = 43;  // ������� ������
    int YellowFG = 33;  // ��������� ������
    int BlueBG = 44;    // ������� �����
    int BlueFG = 34;    // ��������� �����
    int MagentaBG = 45; // ������� ���������
    int MagentaFG = 35; // ��������� ���������
    int CyanBG = 46;    // ������� ��������
    int CyanFG = 36;    // ��������� ��������
    int WhiteBG = 47;   // ������� �����
    int WhiteFG = 37;   // ��������� �����
};