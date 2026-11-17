#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(1251);

    int n;
    cout << "Введите количество строк n (не более 12): ";
    cin >> n;
    cin.ignore(); // очистка буфера после ввода числа перед чтением строк

    char str[12][51];

    cout << "Введите строки:\n";
    for (int i = 0; i < n; i++)
    {
        cin.getline(str[i], 51);
    }

    cout << "\nСтроки, содержащие не менее двух нечетных цифр:\n";

    // переключение вывода в 1251, чтобы корректно напечатать введёные рус. буквы
    SetConsoleOutputCP(1251);
    for (int i = 0; i < n; i++)
    {
        int oddCount = 0;
        for (int j = 0; j < strlen(str[i]); j++)
        {
            if (str[i][j] == '1' || str[i][j] == '3' || str[i][j] == '5' || str[i][j] == '7' || str[i][j] == '9')
            {
                oddCount++;
            }
        }

        if (oddCount >= 2)
        {
            cout << str[i] << endl;
        }
    }

    return 0;
}
