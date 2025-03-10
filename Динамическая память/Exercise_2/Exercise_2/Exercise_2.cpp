﻿/*Сформируйте динамический одномерный массив целых чисел и заполните его случайными числами от -7 до 15. Пользователь вводит количество элементов массива и, через пробел, начальное значение генератора случайных чисел.

Нужно распечатать элементы массива через пробел, и на следующей строке - сумму максимального и минимального элементов массива.

Для работы с динамической памятью используйте операции языка С++. */
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    int* ptr = NULL, n, x, max, min;

    cin >> n >> x;

    srand(x);

    ptr = new int[n];

    for (int i = 0; i < n; i++)
    {
        ptr[i] = rand() % 23 - 7;
        if (i == 0)
        {
            max = ptr[i];
            min = ptr[i];
        }
        else
        {
            if (ptr[i] > max)
            {
                max = ptr[i];
            }

            if (ptr[i] < min)
            {
                min = ptr[i];
            }
        }
        cout << ptr[i] << " ";
    }

    cout << endl << min + max;

    delete[] ptr;

    return 0;
}