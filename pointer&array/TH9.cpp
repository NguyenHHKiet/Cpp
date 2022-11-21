#include <iostream>
#include <cmath>
using namespace std;

void input(int **array, int row, int col)
{
    cout << "Enter input array: (" << row << "x" << col << ")" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Enter input row " << i + 1 << endl;
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }
}

void print(int **array, int row, int col)
{
    cout << "Print out array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkPrimeNumber(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i <= sqrt(1.0 * n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int sumPrimeNumber(int **array, int row, int col)
{
    int total = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (checkPrimeNumber(array[i][j]))
            {
                total += array[i][j];
            }
        }
    }
    return total;
}

void printPrimeNumber(int **array, int row, int col)
{
    cout << "Print out prime number:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (checkPrimeNumber(array[i][j]))
                cout << array[i][j] << " ";
        }
    }
}

int main(int argc, char const *argv[])
{
    int **array, row, col;
    do
    {
        cout << "Enter matrix's row: ";
        cin >> row;
        cout << "Enter matrix's col: ";
        cin >> col;
        if (row <= 0 || col <= 0)
            cout << "Input row and column again!!!";
    } while (row <= 0 || col <= 0);

    // new
    array = new int *[row];
    for (int i = 0; i < row; i++)
    {
        array[i] = new int[col];
    }

    input(array, row, col);
    print(array, row, col);
    cout << "Sum of array prime numbers: " << sumPrimeNumber(array, row, col) << endl;
    printPrimeNumber(array, row, col);
    // delete
    for (int i = 0; i < row; i++)
    {
        delete[] array[i];
    }
    delete[] array;
    array = NULL;

    return 0;
}
