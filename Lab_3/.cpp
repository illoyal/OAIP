#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x1, y1, x2, y2, x3, y3;
    double a, b, c, p;

    cout << "Введите координаты первой вершины (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины (x3 y3): ";
    cin >> x3 >> y3;

    // Вычисляем длины сторон треугольника
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

    p = a + b + c;

    cout << "Периметр треугольника = " << p << endl;

    return 0;
}
