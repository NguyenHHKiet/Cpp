#include <iostream>
using namespace std;

int pascal(int row, int col)
{
    if (col == row || col == 0)
        return 1;
    else
        return pascal(row - 1, col) + pascal(row - 1, col - 1);
}

void initPascal(int **array, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            array[i][j] = pascal(i, j);
        }
    }
}

void printPascal(int **array, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << array[i][j] << "\t";
        cout << "\n";
    }
}

int main(int argc, char const *argv[])
{
    int **array, h;
    do
    {
        cout << "Enter matrix's height square: ";
        cin >> h;
    } while (h <= 0);
    array = new int *[h];
    for (int i = 0; i < h; i++)
        array[i] = new int[h];
    initPascal(array, h);
    printPascal(array, h);

    for (int i = 0; i < h; i++)
        delete[] array[i];
    delete[] array;
    array = NULL;
    return 0;
}
