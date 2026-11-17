#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int k;
    cout << "Введите k: ";
    cin >> k;

    double S = 0.0;
    for (int i = 1; i <= k; i++)
    {
        S = S + i + double(k) / (i + 2);
    }

    cout << "S = " << S << endl;

    return 0;
}
