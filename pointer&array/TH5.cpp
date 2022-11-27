#include <iostream>
using namespace std;
const int MAX = 100;
int fibonacci(int *, int *, int);

int main(int argc, char const *argv[])
{
    int *p, *q, a = 0, b = 1, count;
    p = &a, q = &b;
    do
    {
        cout << "Enter a count into function (without negative): ";
        cin >> count;
    } while (!(count > 0));

    fibonacci(p, q, count);
    return 0;
}

int fibonacci(int *p, int *q, int num)
{
    int temp;
    cout << "Fibonacci series : ";
    for (int i = 0; i < num; i++)
    {
        cout << *p << " ";
        temp = *p + *q;
        *p = *q;
        *q = temp;
    }
}