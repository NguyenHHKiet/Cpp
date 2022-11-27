#include <iostream>
using namespace std;
const int MAX = 100;
int index = 0;
int *search(int *array, int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == x)
        {
            index = i;
            return &array[i];
        }
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    int *ptr = new int[MAX];
    int array[] = {2, 5, -5, 1, -2, 9};
    int x;
    ptr = array;
    do
    {
        cout << "Enter x: ";
        cin >> x;
    } while (!(x > 0));
    int *temp = search(ptr, 6, x);
    if (temp == NULL)
    {
        cout << "Primer number doesn't exists!! " << endl;
        ptr = NULL;
    }
    else
    {
        cout << "value   : " << *temp << endl;
        cout << "first index   : " << index + 1 << endl;
    }
    delete[] ptr;
    ptr = NULL;
    return 0;
}
