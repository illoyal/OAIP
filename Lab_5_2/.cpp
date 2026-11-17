#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char letter;
    cout << "Введите одну из латинских букв (M, S, N, L, B): ";
    cin >> letter;

    switch (letter)
    {
    case 'M':
    case 'm':
        cout << "Minsk" << endl;
        break;
    case 'S':
    case 's':
        cout << "Slonim" << endl;
        break;
    case 'N':
    case 'n':
        cout << "Novopolotsk" << endl;
        break;
    case 'L':
    case 'l':
        cout << "Lida" << endl;
        break;
    case 'B':
    case 'b':
        cout << "Brest" << endl;
        break;
    default:
        cout << "Ошибка: введен символ не из предложенного набора." << endl;
        break;
    }

    return 0;
}
