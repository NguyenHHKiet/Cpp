#include <iostream>
using namespace std;

int const MAX = 30;

void enterValue(int[MAX], int);
void displayArray(int[MAX], int, int *);

int main(int argc, char const *argv[])
{
    int *ptr, array[MAX], count;
    do
    {
        cout << "Enter count array: ";
        cin >> count;
    } while (count <= 0 || count > 30);

    // assign array to ptr
    ptr = array;

    enterValue(array, count);
    displayArray(array, count, ptr);

    return 0;
}

void enterValue(int a[], int count)
{
    cout << "Enter value array []: ";
    for (int j = 0; j < count; j++)
    {
        cin >> a[j];
    }
    cout << endl;
}

void displayArray(int a[], int count, int *ptr)
{
    cout << "Display value in array: " << endl;
    for (int j = 0; j < count; j++)
    {
        cout << *(ptr + j) << ' ';
    }
    cout << endl;
}