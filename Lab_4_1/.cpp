#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    double r2 = x * x + y * y;

    // Точка должна быть вне круга радиуса 1 (r2 >= 1)
    // И попадать либо в верхнюю полуокружность (y >= 0, R = 3), либо в нижнюю (y <= 0, R = 5)
    if (r2 >= 1 && ((y >= 0 && r2 <= 9) || (y <= 0 && r2 <= 25)))
    {
        cout << "Точка принадлежит заштрихованной области." << endl;
    }
    else
    {
        cout << "Точка НЕ принадлежит заштрихованной области." << endl;
    }

    return 0;
}
