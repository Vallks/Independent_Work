﻿/*Пользователь вводит начальное значение генератора случайных чисел. Массив из 5 целых чисел заполнить  случайными значениями от -10 до 10 (включительно). 
Вывести массив на консоль в одну строку, разделяя элементы пробелами (пробел должен быть и после последнего элемента).

Поменять местами первый отрицательный и последний положительный элементы массива.

С новой строки вывести измененный массив, разделяя элементы пробелами (пробел должен быть и после последнего элемента).

Если в массиве отсутствуют отрицательные или отсутствуют положительные элементы, то нужно вместо итогового массива вывести слово ERROR.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int SIZE = 5;
    int ar[SIZE];
    int x, otr, pol;

    otr = pol = -1;

    cin >> x;

    srand(x);

    for (int i = 0; i < SIZE; i++)
    {
        ar[i] = rand() % 21 - 10;
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (ar[i] < 0)
        {
            otr = i;
            break;
        }
    }

    for (int i = SIZE - 1 ; i >= 0; i--)
    {
        if (ar[i] > 0)
        {
            pol = i;
            break;
        }
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << ar[i] << " ";
    }

    cout << endl;

    if (pol == -1 || otr == -1)
    {
        cout << "ERROR";

        return 0;
    }
    
    x = ar[otr];
    ar[otr] = ar[pol];
    ar[pol] = x;

    for (int i = 0; i < SIZE; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
