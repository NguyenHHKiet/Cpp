#include <iostream>
using namespace std;
int const MAX = 100;
void enterValue(int a[][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        cout << "Row [" << i << "]: ";
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
        cout << endl;
    }
}

void displayArray(int a[][MAX], int r, int c)
{
    cout << "Display value in array: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void sum(int a[][MAX], int r, int c)
{
    int principal = 0, secondary = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j) // Condition for principal diagonal
                principal += a[i][j];
            if ((i + j) == (r - 1)) // Condition for secondary diagonal
                secondary += a[i][j];
        }
    }
    cout << "Principal Diagonal:" << principal << endl;
    cout << "Secondary Diagonal:" << secondary << endl;
}

int main(int argc, char const *argv[])
{
    int array[MAX][MAX], row, col, x = 1;
    do
    { // Efficiently compute sums of diagonals of a matrix
        cout << "Enter a square matrix of order n : ";
        cin >> row;
    } while (!(row > 0));
    enterValue(array, row, row);
    displayArray(array, row, row);
    sum(array, row, row);
    return 0;
}
