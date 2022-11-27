#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello" << endl;
    int *p, x, y;
    p = &x;
    *p = 80;
    cout << "p's address:" << p << endl;
    cout << "p's value:" << *p << endl;
    cout << "x's address: " << &x << endl;
    cout << "x's value: " << x << endl;
    return 0;
}