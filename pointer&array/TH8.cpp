#include <iostream>
using namespace std;

void input(int **array, int h)
{
    cout << "Enter input array: (" << h << "x" << h << ")" << endl;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
            cin >> array[i][j];
    }
}

void printPascal(int **array, int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
            cout << " " << *(*(array + i) + line);
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
    input(array, h);
    printPascal(array, h);

    for (int i = 0; i < h; i++)
        delete[] array[i];
    delete[] array;
    array = NULL;
    return 0;
}
