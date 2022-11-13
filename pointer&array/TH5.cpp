#include <iostream>
using namespace std;

int fibonacci(int *, int);

int main(int argc, char const *argv[])
{
    int *ptr, count;
    ptr = new int[];
    cout << "Hello" << endl;
    do
    {
        cout << "Enter a count into function (without negative): ";
        cin >> count;
    } while (!(count > 0));

    cout << "Fibonacci without negative = " << fibonacci(ptr, count) << endl;
    return 0;
}

int fibonacci(int *ptr, int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 2) + fibonacci(num - 1);
    }
}