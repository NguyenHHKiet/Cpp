#include <iostream>
using namespace std;

void createRandomValue(int **array, int row, int col)
{
    cout << "Random value in 2d array: " << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            array[i][j] = rand() % 10;
}
void print(int **array, int row, int col)
{
    cout << "Print out array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }
}
void sumMatrix(int **array1, int **array2, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << array1[i][j] + array2[i][j] << "\t";
        cout << endl;
    }
}

void multiMatrix(int **array1, int **array2, int row, int col)
{
    int rslt[row][col];
    cout << "Multiplication of given two matrices is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            rslt[i][j] = 0;
            for (int k = 0; k < row; k++)
                rslt[i][j] += *(*(array1 + i) + k) * *(*(array2 + k) + j);
            cout << rslt[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int **array1, **array2, row, col;
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
    array1 = new int *[row];
    array2 = new int *[row];
    for (int i = 0; i < row; i++)
    {
        array2[i] = new int[col];
        array1[i] = new int[col];
    }

    createRandomValue(array1, row, col);
    createRandomValue(array2, row, col);
    print(array1, row, col);
    print(array2, row, col);
    cout << "Sum matrix" << endl;
    sumMatrix(array1, array2, row, col);

    multiMatrix(array1, array2, row, col);

    // delete
    for (int i = 0; i < row; i++)
    {
        delete[] array1[i];
        delete[] array2[i];
    }
    delete[] array1;
    delete[] array2;
    array1 = NULL;
    array2 = NULL;

    return 0;
}
