﻿/*Зарплата менеджера составляет 100 $ плюс 5% от продаж. Пользователь вводит общую сумму сделок менеджера за месяц (в долларах). 
Определить итоговую зарплату менеджера в долларах (используйте целые числа).*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a;

    cout << "Введите сумму\n";

    cin >> a;

    cout << a * 5 / 100 + 100 << endl;

    return 0;
}