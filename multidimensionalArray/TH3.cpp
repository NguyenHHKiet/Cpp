#include <iostream>
using namespace std;

int const MAX = 100;

void enterValue(int[MAX][MAX], int, int);
void displayArray(int[MAX][MAX], int, int);
int sum(int[MAX][MAX], int, int);
void findMaxMin(int[MAX][MAX], int, int, int, int);

int main(int argc, char const *argv[])
{
    int array[MAX][MAX], row, col, x = 1, positionX = 0, positionY = 0;
    do
    {
        cout << "Enter count row: ";
        cin >> row;
    } while (!(row <= 10 && row > 0));
    do
    {
        cout << "Enter count column: ";
        cin >> col;
    } while (!(col <= 15 && col > 0));

    // // Get the matrix elements automatically generated
    // for (int i = 0; i < row; i++)
    //     for (int j = 0; j < col; j++)
    //         array[i][j] = x++;

    enterValue(array, row, col);
    displayArray(array, row, col);
    cout << "Find sum: [" << sum(array, row, col) << "] " << endl;
    findMaxMin(array, row, col, positionX, positionY);
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

int sum(int a[][MAX], int r, int c)
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}
void findMaxMin(int a[][MAX], int r, int c, int positionX, int positionY)
{
    int max = a[0][0], min = a[0][0];
    int &xMax = positionX;
    int &yMax = positionY;
    int xMin = 0;
    int yMin = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                xMax = i;
                yMax = j;
            }
            else if (a[i][j] < min)
            {
                min = a[i][j];
                xMin = i;
                yMin = j;
            }
        }
    }
    cout << "Highest Element: " << max << endl;
    cout << "Lowest Element: " << min << endl;
    cout << "X: " << positionX << ",Y: " << positionY << endl;
    cout << "X: " << xMin << ",Y: " << yMin << endl;
}