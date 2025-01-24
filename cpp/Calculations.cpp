#include "H.h"
#include <iostream>

int getNumLength(int n) {
	int length = 0;
	if (n < 0)	{
		 length++;
		 n = -n;
	}
	while (n > 0){
		length++;
		n /= 10;
	}
	return length;
}