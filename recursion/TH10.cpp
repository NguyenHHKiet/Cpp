#include <iostream>

int GCD(int a, int b)
{
    if (!(b == 0))
        return GCD(b, a % b);
    else
        return a;
}

int main(int argc, char const *argv[])
{
    int a, b;
    do
    {
        cout << "Enter a positive A integer: ";
        cin >> a;
        cout << "Enter a positive B integer: ";
        cin >> b;
    } while (!(a > 0 && b > 0));
    cout << "G.C.D : " << GCD(a, b) << endl;
    return 0;
}
