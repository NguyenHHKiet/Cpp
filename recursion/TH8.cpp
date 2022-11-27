#include <iostream>
using namespace std;

int decimalToBinary(int d)
{
    int binary;
    if (d == 0)
        return binary = 0;
    else
        return binary = d % 2 + 10 * decimalToBinary(d / 2);
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> n;
    } while (!(n > 0));
    cout << "binary = " << decimalToBinary(n) << endl;
    return 0;
}
