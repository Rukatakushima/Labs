#include <iostream>
#include <math.h>

int main()
{
    //объявляем переменные и создаем переменные для вывода ответов
    double a, b;
    std::cout << "Write a and b" "\n";
    std::cin >> a >> b;
    double S, R, P, Ch;
    S = pow(a, 2) + pow(b, 2); // задаём переменным значеня нужных нам суммы, разности, произведения и частного чисел a, b.
    R = pow(a, 2) - pow(b, 2);
    P = a*a * pow(b, 2);
    Ch = a*a / pow(b,2);
    std::cout << "S=" << S << "\n" << "R=" << R << "\n" << "P=" << P << "\n" << "Ch=" << Ch << "\n";
    //выводим на экран результат. Он верный. Программа работает правильно.
    return 0;
}
