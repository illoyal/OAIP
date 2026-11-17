#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));

    int n;
    double p;
    cout << "Введите размер массива n (от 1 до 10): ";
    cin >> n;
    cout << "Введите p (p >= 2): ";
    cin >> p;

    double arr[10];
    double minVal = 0.5 * p;
    double maxVal = 3.5 * p;

    cout << "\nСформированный массив:\n";
    for (int i = 0; i < n; i++)
    {
        // генерация дробного числа в заданном диапазоне
        arr[i] = minVal + (double)rand() / RAND_MAX * (maxVal - minVal);
        cout << "[" << i << "] = " << arr[i] << endl;
    }

    // ищем максимальный элемент
    double maxElem = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElem)
        {
            maxElem = arr[i];
        }
    }

    cout << "\nМаксимальный элемент: " << maxElem << endl;
    cout << "Индексы элементов меньше максимального: ";

    double prod = 1.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < maxElem)
        {
            cout << i << " ";
            prod *= arr[i];
        }
    }

    cout << "\nПроизведение этих элементов: " << prod << endl;

    return 0;
}
