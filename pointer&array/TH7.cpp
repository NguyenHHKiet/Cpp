#include <iostream>
using namespace std;

int *search(int *array, int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == x)
        {
            return &array[i];
        }
    }

    return NULL;
}

int main(int argc, char const *argv[])
{
    int *ptr = new int[6];
    int array[] = {2, 5, -5, 1, -2, 9};
    ptr = array;
    int *temp = search(ptr, 6, 9);
    if (temp == NULL)
        cout << "Primer number doesn't exists!! " << endl;
    else
    {
        cout << "value   : " << *temp << endl;
        cout << "address : " << temp << endl;
    }
    delete[] ptr;
    return 0;
}
