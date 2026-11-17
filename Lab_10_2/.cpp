#include <iostream>
#include <windows.h>

using namespace std;

// 1 вариант: через указатель (изменяет само число)
void flip(int* N)
{
    int temp = *N;
    int res = 0;
    while (temp > 0)
    {
        res = res * 10 + temp % 10;
        temp = temp / 10;
    }
    *N = res;
}

// 2 вариант: через ссылку (изменяет само число)
void flip(int& N)
{
    int temp = N;
    int res = 0;
    while (temp > 0)
    {
        res = res * 10 + temp % 10;
        temp = temp / 10;
    }
    N = res;
}

// 3 вариант: по значению (используем long, чтобы избежать конфликта с int&)
long flip(long N)
{
    long res = 0;
    while (N > 0)
    {
        res = res * 10 + N % 10;
        N = N / 10;
    }
    return res;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Введите натуральное число N (например, 567321): ";
    cin >> n;

    // 1. Вызов варианта с указателем (передаем адрес &n)
    flip(&n);
    cout << "После flip(&n) [указатель]: " << n << endl;

    // 2. Вызов варианта со ссылкой (передаем саму переменную n)
    flip(n);
    cout << "После flip(n) [ссылка]:     " << n << endl;

    // 3. Вызов варианта по значению (явно передаем тип long)
    long reversed = flip((long)n);
    cout << "Результат flip((long)n) [по значению]: " << reversed << endl;
    cout << "Само число n не изменилось:            " << n << endl;

    return 0;
}
