#include <iostream>

int GCD(int a, int b)
{
    if (!(b == 0))
    {
        return GCD(b, a % b);
    }
    else
    {
        return a;
    }
}

int main(int argc, char const *argv[])
{
    int a = 100, b = 70;
    cout << "G.C.D : " << GCD(a, b) << endl;
    return 0;
}
