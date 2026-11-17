#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x_start, x_end, dx;
    cout << "Введите начальное значение x: ";
    cin >> x_start;
    cout << "Введите конечное значение x: ";
    cin >> x_end;
    cout << "Введите шаг dx: ";
    cin >> dx;

    cout << "\n   x\t|\tF(x)\n";
    cout << "-------------------------\n";

    double x = x_start;
    while (x <= x_end + 1e-9)
    {
        if (fabs(x * x * x + 1.0) < 1e-9)
        {
            cout << "   " << x << "\t|\tделение на ноль\n";
        }
        else
        {
            double fx = 5.6 / (x * x * x + 1.0) + 0.3 * x - pow(sin(x), 3);
            cout << "   " << x << "\t|\t" << fx << "\n";
        }
        x = x + dx;
    }

    return 0;
}
