#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double fx = 3.5 - sin(4.0 * x);
    double sum = 0.0;
    int n = 0;

    do
    {
        n++;
        sum = sum + 1.0 / n;
    } while (sum <= fx);

    cout << "Значение f(x) = " << fx << endl;
    cout << "Наименьшее n = " << n << endl;
    cout << "Полученная сумма = " << sum << endl;

    return 0;
}
