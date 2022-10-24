#include <iostream>

int GCD(int a, int b)
{
    if (!(b == 0))
    {
        /* code */
        return GCD(b, a % b);
    }
    else
    {
        /* code */
        return a;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int a = 100, b = 75;
    cout << "G.C.D : " << GCD(a, b) << endl;
    return 0;
}
