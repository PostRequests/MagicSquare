#include <iostream>
#include "Magic.h"

void showItemMenu(Menu m) {
	ColorANSI3b color;
	setCursorPosition(m.startPos);
	for (int i = 0; i < m.countMenu; i++) {
		if (m.n == i) setColor(color.WhiteBG, color.BlackFG);
		setCursorPosition({ m.startPos.x,  ++m.startPos.y });
		std::cout << m.elemMenu[i] << "  ";
		if (m.n == i) resetColor();
	}
	return;
}

int scrollMenu(Menu m) {
	showItemMenu(m);
	while (true)
	{
		char key = catchKey();
		if (key == 's') {
			(m.n - 1 == -1) ? m.n = m.countMenu - 1 : m.n -= 1;
			showItemMenu(m);
		}
		else if (key == 'w') {
			(m.n + 1 == m.countMenu) ? m.n = 0 : m.n += 1;
			showItemMenu(m);
		}
		else if (key == 13) {
			return m.n;
		}

	}
}


void clearMenu(Menu& m) {
	for (int i = 0; i < m.countMenu; i++) {
		delete[] m.elemMenu[i];
	}
	delete[] m.elemMenu;
	m.elemMenu = nullptr;
}

Menu constructMenu(Coordinate startPos, int countMenu, const char* elemMenu[], int n) {
	Menu m;
	m.startPos = startPos;//Координаты начала места печати меню
	m.countMenu = countMenu; //Количество элементов в меню
	m.elemMenu = new char* [countMenu];//Элементы меню
	for (int i = 0; i < countMenu; i++)
	{
		m.elemMenu[i] = new char[getCharLen(elemMenu[i]) + 1];
		copyStr(m.elemMenu[i], elemMenu[i]);
	}
	m.n = n; //Номер выбранного элемента меню
	return m;
}