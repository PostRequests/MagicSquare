#pragma once
struct Coordinate {
    int x; //���
    int y; //������
};

struct Menu {
    Coordinate startPos;//���������� ������ ����� ������ ����
    int countMenu; //���������� ��������� � ����
    char** elemMenu = nullptr;//�������� ����
    int n; //����� ���������� �������� ����
};

struct ColorANSI3b {//����� ANSI 3��� 
    const int BlackBG = 40;   // ������� ������
    const int BlackFG = 30;   // ��������� ������
    const int RedBG = 41;     // ������� �������
    const int RedFG = 31;     // ��������� �������
    const int GreenBG = 42;   // ������� �������
    const int GreenFG = 32;   // ��������� �������
    const int YellowBG = 43;  // ������� ������
    const int YellowFG = 33;  // ��������� ������
    const int BlueBG = 44;    // ������� �����
    const int BlueFG = 34;    // ��������� �����
    const int MagentaBG = 45; // ������� ���������
    const int MagentaFG = 35; // ��������� ���������
    const int CyanBG = 46;    // ������� ��������
    const int CyanFG = 36;    // ��������� ��������
    const int WhiteBG = 47;   // ������� �����
    const int WhiteFG = 37;   // ��������� �����
};