#include "H.h"

int getMax(int *arr, int s) {
	int max = *arr;
	for (int i = 1; i < s; i++)
        if (*(arr + i) > max)
			max = arr[i];
	return max;
}
int getMax(int *arr, int rows, int cols) {
    int r = arr[0]; //Результат
    for (int i = 0; i < rows; ++i){
        int maxT = getMax(arr + i * cols, cols);
        if (maxT  > r) r = maxT;
    }                
    return r;
}

int getMin(int* arr, int s) {
    int min = *arr;
    for (int i = 1; i < s; i++)
        if (*(arr + i) <  min)
            min = arr[i];
    return min;
}

int getMin(int* arr, int rows, int cols) {
    int max = arr[0];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (*(arr + i * cols + j) < max)
                max = *(arr + i * cols + j);
    return max;
}