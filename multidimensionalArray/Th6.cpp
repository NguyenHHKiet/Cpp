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
void mul(int a1[][MAX], int r1, int c1, int a2[][MAX], int r2, int c2)
{
    int rslt[r1][c2];
    cout << "Multiplication of given two matrices is:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            rslt[i][j] = 0;
            for (int k = 0; k < r2; k++)
                rslt[i][j] += a1[i][k] * a2[k][j];
            cout << rslt[i][j] << "\t";
        }
        cout << endl;
    }
}
void sum(int a1[][MAX], int r1, int c1, int a2[][MAX], int r2, int c2)
{
    int sum[r1][c1];
    cout << "Sum of two matrix is:\n";
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            sum[i][j] = a1[i][j] + a2[i][j];
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int array1[MAX][MAX], array2[MAX][MAX], row1, col1, row2, col2;
    cout << "Enter matrix 1 first: " << endl;
    do
    {
        cout << "Enter count row: ";
        cin >> row1;
    } while (!(row1 > 0));
    do
    {
        cout << "Enter count column: ";
        cin >> col1;
    } while (!(col1 > 0));
    enterValue(array1, row1, col1);
    displayArray(array1, row1, col1);
    cout << "Enter matrix 2 second: " << endl;
    do
    {
        cout << "Enter count row: ";
        cin >> row2;
    } while (!(row2 > 0));
    do
    {
        cout << "Enter count column: ";
        cin >> col2;
    } while (!(col2 > 0));
    enterValue(array2, row2, col2);
    displayArray(array2, row2, col2);
    if (row1 == row2 && col1 == col2)
        sum(array1, row1, col1, array2, row2, col2);
    else
        cout << "When matrices are the same size (they have the same number of rows and the same number of columns)" << endl;

    if (col1 != row2)
        cout << "The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2" << endl;
    else
        mul(array1, row1, col1, array2, row2, col2);

    return 0;
}
