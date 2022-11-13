#include <iostream>
using namespace std;

int const MAX = 30;

void enterValue(int *, int);
void displayArray(int *, int);
int *findMaximumElement(int *, int);

int main(int argc, char const *argv[])
{
    int *ptr, count;
    cout << "count array: " << MAX << endl;
    // do
    // {
    //     cout << "Enter count array: ";
    //     cin >> count;
    // } while (count <= 0 || count > 30);

    // assign array to ptr
    ptr = new int[MAX];

    enterValue(ptr, MAX);
    displayArray(ptr, MAX);
    cout << "Min address: " << findMaximumElement(ptr, MAX);

    return 0;
}

void enterValue(int *ptr, int count)
{
    cout << "Enter value array []: ";
    for (int j = 0; j < count; j++)
    {
        *(ptr + j) = rand() % 10;
    }
    cout << endl;
}

void displayArray(int *ptr, int count)
{
    cout << "Display value in array: " << endl;
    for (int j = 0; j < count; j++)
    {
        if (*(ptr + j) % 2 != 0)
            cout << *(ptr + j) << ' ';
    }
    cout << endl;
}

int *findMaximumElement(int *ptr, int count)
{
    cout << "Maximum value in array: " << endl;
    int temp = *ptr;
    for (int j = 0; j < count; j++)
    {
        if (temp > *(ptr + j))
            temp = *(ptr + j);
    }
    return &temp;
}
