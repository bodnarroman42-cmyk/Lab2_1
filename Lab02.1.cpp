// Lab_02.1.cpp
// Боднар Роман
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 2

#include <iostream>
#include <cmath>
#include <iomanip> // Бібліотека для setprecision

using namespace std;

int main()
{
    // Оголошення всіх змінних типу double в один рядок
    double alpha, z1, z2;

    const double Pi = 4.0 * atan(1.0); // значення числа Пі

    cout << "alpha = ";
    cin >> alpha;

    // Обчислення за першою формулою
    z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);

    // Обчислення за другою формулою
    z2 = 2 * sqrt(2) * cos(alpha) * sin(Pi / 4.0 + 2 * alpha);

    cout << endl;

    // Форматування виводу: 3 знаки після коми
    cout << fixed << setprecision(3);

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}