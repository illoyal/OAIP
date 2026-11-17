#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int day;
    cout << "Введите номер дня недели (1-7): ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Предыдущий день недели: Воскресенье" << endl;
        break;
    case 2:
        cout << "Предыдущий день недели: Понедельник" << endl;
        break;
    case 3:
        cout << "Предыдущий день недели: Вторник" << endl;
        break;
    case 4:
        cout << "Предыдущий день недели: Среда" << endl;
        break;
    case 5:
        cout << "Предыдущий день недели: Четверг" << endl;
        break;
    case 6:
        cout << "Предыдущий день недели: Пятница" << endl;
        break;
    case 7:
        cout << "Предыдущий день недели: Суббота" << endl;
        break;
    default:
        cout << "Ошибка: введен неправильный номер дня недели." << endl;
        break;
    }

    return 0;
}
