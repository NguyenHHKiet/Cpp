#include <iostream>
using namespace std;

int const MAX = 100;

void enterValue(int[MAX][MAX], int, int);
void displayArray(int[MAX][MAX], int, int);

int main(int argc, char const *argv[])
{
    int array[MAX][MAX], row, col;
    cout << "Enter count row: ";
    cin >> row;
    cout << "Enter count column: ";
    cin >> col;

    enterValue(array, row, col);
    displayArray(array, row, col);

    return 0;
}

void enterValue(int a[][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        cout << "Row [" << i << "]: ";
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
}

void displayArray(int a[][MAX], int r, int c)
{
    cout << "Display value in array: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}