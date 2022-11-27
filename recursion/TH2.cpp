#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main(int argc, char const *argv[])
{
    int count;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> count;
    } while (!(count > 0));
    cout << "Factorial calculation without negative = " << factorial(count) << endl;
    return 0;
}
