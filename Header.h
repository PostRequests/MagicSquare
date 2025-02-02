#pragma once
template<typename T>
void show(T[], int s);
template<typename T, size_t N, size_t M>
void show(int(&a)[N][M], int r, int c);
void show(int a[][4], int r, int c);
template<typename T>
void show(T);