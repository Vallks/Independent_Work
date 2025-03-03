﻿/*Пользователь вводит начальное значение генератора случайных чисел. 
Сформировать двумерный массив из 4 строк и 5 столбцов, заполнив его случайными числами от -10 до 10. 
Распечатать этот массив в виде таблицы, отделяя элементы в строке знаками табуляции (знак табуляции должен быть и в конце каждой строки).

Вывести пустую строку.

Сформировать массив указателей на начало каждой строки двумерного массива. 
Отсортировать этот массив указателей так, чтобы первые элементы строк оказались в порядке возрастания (сам двумерный массив не изменяется, меняется только массив указателей).

Вывести строки двумерного массива в полученном порядке. Элементы строк отделяются знаками табуляции.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int R = 4;
    const int C = 5;
    int ar[R][C];
    int x, * ptr = ar[0], *ptrm[R];

    cin >> x;
    srand(x);

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++, ptr++)
        {
            *ptr = rand() % 21 - 10;
            cout << *ptr << "\t";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < R; i++)
    {
        ptrm[i] = ar[i];
    }

    for (int i = R - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (*ptrm[j] > *ptrm[j + 1])
            {
                int* tmp = ptrm[j];
                ptrm[j] = ptrm[j + 1];
                ptrm[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < R; i++)
    {
        ptr = ptrm[i];
        for (int j = 0; j < C; j++, ptr++)
        {
            cout << *ptr << "\t";
        }
        cout << endl;
    }

    return 0;
}
