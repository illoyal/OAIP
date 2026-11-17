#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void evenProduct(int arr[], int m, int num)
{
    long long prod = 1;
    bool hasEven = false;

    for (int i = 0; i < m; i++)
    {
        if (arr[i] % 2 == 0)
        {
            prod *= arr[i];
            hasEven = true;
        }
    }

    if (hasEven)
        cout << "Массив " << num << " - произведение четных: " << prod << endl;
    else
        cout << "Массив " << num << " - четных элементов нет" << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));

    int m, k;
    cout << "Введите размер массивов m (от 1 до 7): ";
    cin >> m;
    cout << "Введите k (от 4 до 8): ";
    cin >> k;

    int array1[7], array2[7], array3[7], array4[7];

    // заполняем массивы случайными числами от k до 3*k
    for (int i = 0; i < m; i++)
    {
        array1[i] = k + rand() % (3 * k - k + 1);
        array2[i] = k + rand() % (3 * k - k + 1);
        array3[i] = k + rand() % (3 * k - k + 1);
        array4[i] = k + rand() % (3 * k - k + 1);
    }

    cout << "\narray1: ";
    for (int i = 0; i < m; i++) cout << array1[i] << " ";
    cout << "\narray2: ";
    for (int i = 0; i < m; i++) cout << array2[i] << " ";
    cout << "\narray3: ";
    for (int i = 0; i < m; i++) cout << array3[i] << " ";
    cout << "\narray4: ";
    for (int i = 0; i < m; i++) cout << array4[i] << " ";
    cout << "\n\n";

    evenProduct(array1, m, 1);
    evenProduct(array2, m, 2);
    evenProduct(array3, m, 3);
    evenProduct(array4, m, 4);

    return 0;
}
