#include <iostream>
#include <windows.h>

using namespace std;

void F(int N, int& First, int& Last)
{
    Last = N % 10; // Последняя цифра это остаток от деления на 10

    while (N >= 10)
    {
        N = N / 10; // Отбрасываем цифры справа пока не останется самая первая
    }
    First = N; // Оставшаяся однозначная цифра и есть первая
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, firstDigit, lastDigit;
    cout << "Введите натуральное число N: ";
    cin >> n;

    F(n, firstDigit, lastDigit);

    cout << "Старшая (первая) цифра: " << firstDigit << endl;
    cout << "Младшая (последняя) цифра: " << lastDigit << endl;

    return 0;
}
