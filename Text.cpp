#include "Magic.h"

void copyStr(char* a, char* b) {
	for (; (*a = *b); a++, b++);
}
void copyStr(char* a, const char* b) {
	for (; (*a = *b); a++, b++);
}

int getCharLen(const char* t) {
	int len = 0;//Длинна строки
	for (; *t != '\0'; t++, len++);
	return len;
}