#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(int *array, int size)
{
    int *positionE = array + size - 1, *positionB = array;
    while (positionB < positionE)
    {
        swap(positionB, positionE);
        positionB++;
        positionE--;
    }
}

void print(int *array, int size)
{
    // length pointing at the end of the array, position at the beginning of the array
    int *length = array + size, *position = array;
    for (position; position < length; position++)
    {
        cout << *position << " ";
    }
}

int main(int argc, char const *argv[])
{
    cout << "Hello, reverse array using pointer.." << endl;
    int *ptr = new int[6];
    int array[] = {2, 5, -5, 1, -2, 9};
    ptr = array;
    print(ptr, 6);
    cout << endl;
    reverse(ptr, 6);
    print(ptr, 6);
    return 0;
}
