#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

double f(double x)
{
    return -0.3 * pow(x, 5) + 2.3 * x + 7.5;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, x;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    cout << fixed << setprecision(5);

    // делим отрезок пополам, пока длина больше 0.005
    while ((b - a) > 0.005)
    {
        x = (a + b) / 2.0;
        cout << "x = " << x << endl;

        // выбираем ту половину, где функция меняет знак
        if (f(a) * f(x) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
    }

    x = (a + b) / 2.0;
    cout << "Корень x = " << x << endl;

    return 0;
}
