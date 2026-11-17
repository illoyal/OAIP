#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <windows.h>

using namespace std;

// заполнение и вывод матрицы
void fillAndPrint(double mat[5][6], int m, int n, double k, char name)
{
    cout << "\nМатрица " << name << ":\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = -k + (double)rand() / RAND_MAX * (3.0 * k);
            cout << setw(8) << mat[i][j];
        }
        cout << endl;
    }
}

// подсчет отрицательных элементов в четных столбцах (2-й, 4-й, 6-й -> индексы 1, 3, 5)
int countNegEvenCols(double mat[5][6], int m, int n)
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j < n; j += 2)
        {
            if (mat[i][j] < 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));

    int m, n;
    double k;

    cout << "Введите количество строк m (2..5): ";
    cin >> m;
    cout << "Введите количество столбцов n (2..6): ";
    cin >> n;
    cout << "Введите k (1.5..4.5): ";
    cin >> k;

    double A[5][6], B[5][6], C[5][6];

    cout << fixed << setprecision(2);

    fillAndPrint(A, m, n, k, 'A');
    fillAndPrint(B, m, n, k, 'B');
    fillAndPrint(C, m, n, k, 'C');

    int countA = countNegEvenCols(A, m, n);
    int countB = countNegEvenCols(B, m, n);
    int countC = countNegEvenCols(C, m, n);

    cout << "\nОтрицательных в четных столбцах: A = " << countA << ", B = " << countB << ", C = " << countC << endl;

    int maxCount = countA;
    if (countB > maxCount) maxCount = countB;
    if (countC > maxCount) maxCount = countC;

    cout << "Матрица(ы) с наибольшим количеством: ";
    if (countA == maxCount) cout << "A ";
    if (countB == maxCount) cout << "B ";
    if (countC == maxCount) cout << "C ";
    cout << endl;

    return 0;
}
