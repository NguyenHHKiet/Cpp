#include <iostream>
using namespace std;

void input(int **array, int h)
{
    cout << "Enter input array: (" << h << "x" << h << ")" << endl;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            cin >> array[i][j];
        }
    }
}

void print(int **array, int h)
{
    cout << "Print out array: " << endl;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
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
    {
        array[i] = new int[h];
    }
    input(array, h);
    print(array, h);
    return 0;
}
