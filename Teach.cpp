#include <iostream>
/// <summary>
/// Рекурсивная функа
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
using namespace std;

int vvod(int a, int b) {

	if (a == b)
		return a;
	return b * vvod(a + 1, b);
}

template<typename T, size_t N>
void show(T (&a)[N]) {
	for (int i = 0; i < N; i++)
	{
		cout << a[i];
	}
	cout << endl;
}

template<typename T, size_t N, size_t M>
void show(int (&a)[N][M], int r, int c) {
	for (int i = 0; i < M; i++)
	{
		for (int b = 0; N < c; b++)
		{
			std::cout << a[i][b];
		}
		std::cout << std::endl;

	}
	std::cout << std::endl;
}


template<typename T>
void show(T a) {
	cout << a << endl;

}