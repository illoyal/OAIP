#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

double f(double x)
{
    return 0.7 * x * x + 3.2 * sin(x) + 1.5;
}

double F_exact(double x)
{
    return (0.7 / 3.0) * x * x * x - 3.2 * cos(x) + 1.5 * x;
}

double leftRect(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += f(a + i * h);
    }
    return h * sum;
}

double rightRect(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        sum += f(a + i * h);
    }
    return h * sum;
}

double trapezoid(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < n; i++)
    {
        sum += f(a + i * h);
    }
    return h * sum;
}

double simpson(double a, double b, int n)
{
    if (n % 2 != 0) n++;
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            sum += 4.0 * f(a + i * h);
        else
            sum += 2.0 * f(a + i * h);
    }
    return (h / 3.0) * sum;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b;
    int k;
    cout << "Введите нижний предел a (для pi/8 введите 0.3927): ";
    cin >> a;
    cout << "Введите верхний предел b (для pi/2 введите 1.5708): ";
    cin >> b;
    cout << "Введите k (четное число, например 10): ";
    cin >> k;

    cout << fixed << setprecision(4);
    cout << "\nТочное значение интеграла: " << F_exact(b) - F_exact(a) << endl;

    cout << "\n--- При n = k (" << k << ") ---" << endl;
    cout << "Метод левых прямоугольников:  " << leftRect(a, b, k) << endl;
    cout << "Метод правых прямоугольников: " << rightRect(a, b, k) << endl;
    cout << "Метод трапеций:               " << trapezoid(a, b, k) << endl;
    cout << "Метод Симпсона:               " << simpson(a, b, k) << endl;

    int n10 = 10 * k;
    cout << "\n--- При n = 10k (" << n10 << ") ---" << endl;
    cout << "Метод левых прямоугольников:  " << leftRect(a, b, n10) << endl;
    cout << "Метод правых прямоугольников: " << rightRect(a, b, n10) << endl;
    cout << "Метод трапеций:               " << trapezoid(a, b, n10) << endl;
    cout << "Метод Симпсона:               " << simpson(a, b, n10) << endl;

    return 0;
}
