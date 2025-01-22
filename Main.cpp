
#include <iostream>
#include <Windows.h>
#include "cpp/H.h"
#include "cpp/Global.h"




int main() {
    int arr[][5] = {
    { 1, 12, 3, 4, 5},
    { 1, 2, 13, 4, 5},
    };
    std::cout << getMin(&arr[0][0], 2, 5);
    
}