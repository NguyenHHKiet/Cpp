#include <iostream>
using namespace std;
int const MAX = 100;
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

void sum(int a[][MAX], int r, int c)
{
    int row, col, sum = 0;
    char choice;
    do
    {
        cout << "---------Function SUM:---------" << endl;
        do
        {
            cout << "Enter row: ";
            cin >> row;
        } while (!(row < r && row >= 0));
        do
        {
            cout << "Enter column: ";
            cin >> col;
        } while (!(col < c && col >= 0));
        sum += a[row][col];
        cout << "Do you want to going to sum?? Y/N" << endl;
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    cout << "Sum: " << sum << endl;
}
void search(int a[][MAX], int r, int c)
{
    int choice, count = 0, row[r], col[c];
    cout << "Enter search x : " << endl;
    cin >> choice;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == choice)
            {
                row[count] = i;
                col[count] = j;
                count++;
            }
        }
    }
    if (count != 0)
    {
        cout << "=> it does exist in the 2d array" << endl;
        cout << "Count number of occurrences: " << count << endl;
        cout << "Index's occurrences: " << endl;
        for (int i = 0; i < count; i++)
        {
            cout << "[" << row[i] << " " << col[i] << "] ";
        }
    }
    else
    {
        cout << "=> doesn't exist in the 2d array" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int array[MAX][MAX], row, col, x = 1;
    do
    {
        cout << "Enter count row: ";
        cin >> row;
    } while (!(row <= 5 && row > 0));
    do
    {
        cout << "Enter count column: ";
        cin >> col;
    } while (!(col <= 6 && col > 0));

    enterValue(array, row, col);
    displayArray(array, row, col);
    sum(array, row, col);
    search(array, row, col);
    return 0;
}
