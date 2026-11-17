#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    double d = fabs(x) + fabs(y);

    // Точка между внутренним (d >= 2) и внешним (d <= 4) ромбами, исключая 4-ю четверть (x > 0 и y < 0)
    if (d >= 2 && d <= 4 && (y >= 0 || x <= 0))
    {
        cout << "Точка принадлежит заштрихованной области." << endl;
    }
    else
    {
        cout << "Точка НЕ принадлежит заштрихованной области." << endl;
    }

    return 0;
}
