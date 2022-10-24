#include <iostream>
using namespace std;

int binary;

int decimalToBinary(int d)
{
    if (d == 0)
    {
        cout << d;
        return binary = 0;
    }
    else
    {
        cout << d;
        return binary = d % 2 + 10 * decimalToBinary(d / 2);
    }
}

int main(int argc, char const *argv[])
{
    int n = 25;
    int temp = decimalToBinary(n);
    cout << "binary = " << temp << endl;
    cout << 1 % 2; // test first argument
    return 0;
}
