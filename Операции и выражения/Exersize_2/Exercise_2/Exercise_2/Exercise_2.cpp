﻿/*Пользователь вводит с клавиатуры время в секундах. 
Нужно определить, сколько введенный интервал времени содержит целых часов, сколько минут в оставшейся части времени и сколько остается секунд.

Например, 5311cекунд - это 1 час, 28 минут и 31 секунда.

Все полученные числа выводить с новой строки: часы, минуты и секунды.*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a;

    cout << "Введите количество секунд\n";

    cin >> a;

    cout << a / 3600 << endl;
    cout << a / 60 % 60 << endl;
    cout << a % 60 << endl;

    return 0;
}