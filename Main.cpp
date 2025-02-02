
#include <iostream>
#include <Windows.h>
#include "cpp/H.h"
#include "cpp/Global.h"
#include "MSLib/MS.h"
#include "Header.h"

using namespace std;

template<typename T, size_t N, size_t M>
void show(T(&a)[N][M]) {
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < M; i++)
		{
			std::cout << a[j][i] << " ; ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

template<typename T, size_t N, size_t M>
void vod(T(&a)[N][M]) {
	srand(time(0));
	for (int j = 0; j < N; j++) 
		for (int i = 0; i < M; i++)
		a[i][j] = rand() % 10;
}

template<typename T, size_t N>
void randM(T(&a)[N], int s, int e) {
	for (size_t i = 0; i < N; i++) {
		a[i] = s + static_cast<T>(rand()) / (static_cast<T>(RAND_MAX / (e - s)));
	}
}
template<typename T, size_t N>
void ShowM(T(&a)[N]) {
	srand(time(0));
	for (int i = 0; i < N; i++)
		cout << a[i] << ";";
}

template<typename T, size_t N>
T getMax1(T(&a)[N]) {
	int num = 0;
	int max = 0;
	for (size_t i = 0; i < N; i++)
	{
		if (max > a[i] and a[i] != INT16_MIN) {
			max = a[i];
			num = i;
		}
	}
	a[num] = INT16_MIN;
	return max;
}

template<typename T, size_t N>
void sort(T(&a)[N]) {
	T m[N];
	for (size_t i = 0; i < N; i++)
	{
		m[i] = getMax1(a);
	}
	for (size_t i = 0; i < N; i++)
	{
		a[i] = m[i];
	}
}
template<typename T, size_t N>
void sortBouble(T(&a)[N]) {
	for (size_t i = 0; i < N; i++)
	{
		bool f = true;
		for (size_t c = 0; c < N-1-i; c++)
		{
			if (a[c] > a[c + 1])
			{
				T temp = a[c];
				a[c] = a[c + 1];
				a[c + 1] = temp;
			}
			else f = false;
		}
		if (f) break;
	}
}

int main() {
	int a[5] = { 1,2,3,4, 40 };
	int b[10][5];
	randM(a, 1, 10);
	ShowM(a);
	sortBouble(a);
	cout << endl << "sort" << endl ;
	ShowM(a);


	//drawMatrix(&b[0][0], rowB, colB, 10, 10, 41);
}
