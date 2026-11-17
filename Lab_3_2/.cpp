#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int h, m, s; // Текущее время
    int p, q, r; // Сколько времени прошло

    cout << "Введите текущее время (часы минуты секунды): ";
    cin >> h >> m >> s;

    cout << "Введите интервал назад (часы минуты секунды): ";
    cin >> p >> q >> r;

    // Переводим всё в секунды
    int current_sec = h * 3600 + m * 60 + s;
    int back_sec = p * 3600 + q * 60 + r;

    // Вычитаем время; формула с остатком от 86400 корректно работает при переходе через 00:00:00
    int total_sec = (current_sec - back_sec) % 86400;
    if (total_sec < 0) {
        total_sec += 86400;
    }

    // Переводим обратно в часы, минуты и секунды
    int res_h = total_sec / 3600;
    int res_m = (total_sec % 3600) / 60;
    int res_s = total_sec % 60;

    cout << "Время назад составляло: " << res_h << " ч. " << res_m << " мин. " << res_s << " сек." << endl;

    return 0;
}
