
#include <iostream>
#include <Windows.h>
#include "cpp/H.h"
#include "cpp/Global.h"

using namespace std;
int main() {
	setCursorPosition(0, 0);
	cout << "o";
	
	setCursorPosition(2, 2);
	cout << "o";

	setCursorPosition(1, 1);
	cout << "k";
	setCursorPosition(3, 3);
}