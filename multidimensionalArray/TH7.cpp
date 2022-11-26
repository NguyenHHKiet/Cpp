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
int sum(int a[][MAX], int r, int c)
{
    int sum = 0;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum += a[i][j];
    return sum;
}
void search(int a[][MAX], int r, int c, int x)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] == x)
                cout << "=> it does exist in the array" << endl;
}
void swap2Element(int a[][MAX], int r, int c, int x, int y)
{
    int temp = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == x)
                a[i][j] = y;
            else if (a[i][j] == y)
                a[i][j] = x;
        }
}
int mul(int a[][MAX], int r, int c, int positionY)
{
    int mul = 1;
    for (int i = 0; i < r; ++i)
        mul *= a[i][positionY];
    return mul;
}
int main(int argc, char const *argv[])
{
    int array[MAX][MAX], row, col, choice, x, y, positionY;
    do
    {
        cout << "Enter count row: ";
        cin >> row;
    } while (!(row > 0));
    do
    {
        cout << "Enter count column: ";
        cin >> col;
    } while (!(col > 0));
    enterValue(array, row, col);
    displayArray(array, row, col);
    cout << "Sum of matrix is: " << sum(array, row, col) << endl;
    cout << "Enter search x : " << endl;
    cin >> choice;
    search(array, row, col, choice);
    cout << "Enter swap x : " << endl;
    cin >> x;
    cout << "Enter swap y : " << endl;
    cin >> y;
    swap2Element(array, row, col, x, y);
    displayArray(array, row, col);
    cout << "Enter multiply of position Y: " << endl;
    cin >> positionY;
    cout << "Multiply of column Y is: " << mul(array, row, col, positionY) << endl;
    return 0;
}
