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
void sum(int a1[][MAX], int a2[][MAX], int r, int c)
{
    int sum[r][c];
    cout << "Sum of two matrix is:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a1[i][j] + a2[i][j];
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int array1[MAX][MAX], array2[MAX][MAX], row, col;
    do
    { // Efficiently compute sums of diagonals of a matrix
        cout << "Enter a square matrix of order n : ";
        cin >> row;
    } while (!(row > 0));
    cout << "First Matrix : " << endl;
    enterValue(array1, row, row);
    displayArray(array1, row, row);
    cout << "Second Matrix : " << endl;
    enterValue(array2, row, row);
    displayArray(array2, row, row);
    sum(array1, array2, row, row);
    return 0;
}
