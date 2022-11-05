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
    int i = 0;
    while (i < r)
    {
        cout << "Row [" << i << "]: ";
        int j = 0;
        while (j < c)
        {
            cin >> a[i][j];
            j++;
        }
        cout << endl;
        i++;
    }
}

void displayArray(int a[][MAX], int r, int c)
{
    cout << "Display value in array: " << endl;
    int i = 0;
    while (i < r)
    {
        int j = 0;
        while (j < c)
        {
            cout << a[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}