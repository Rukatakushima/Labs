﻿// Lab 4 N 5: Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    //объявляем переменные и создаем переменные для вывода ответов
    double a, b;
    std::cout << "Write a and b" "\n";
    std::cin >> a >> b;
    double S, R, P, Ch;
    S = abs(a) + abs(b); // задаём переменным значеня нужных нам суммы, разности, произведения и частного чисел a, b.
    R = abs(a) - abs(b);
    P = abs(a) * abs(b);
    Ch = abs(a) / abs(b);
    std::cout << "S=" << S << "\n" << "R=" << R << "\n" << "P=" << P << "\n" << "Ch=" << Ch << "\n";
    //выводим на экран результат. Он верный. Программа работает правильно.
    return 0;
}