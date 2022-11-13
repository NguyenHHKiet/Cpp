#include <iostream>
using namespace std;
int GCD(int *a, int *b)
{
    int d;
    if (!(*b == 0))
    {
        d = *a % *b;
        return GCD(b, &d);
    }
    else
    {
        return *a;
    }
}
int main(int argc, char const *argv[])
{
    cout << "Hello" << endl;
    int *p1, *p2, x = 80, y = 50;

    p1 = &x, p2 = &y;
    cout << "p1's address:" << p1 << " | p1's value: " << *p1 << endl;
    cout << "p2's address:" << p2 << " | p2's value: " << *p2 << endl;
    cout << "G.C.D : " << GCD(p1, p2);
    return 0;
}