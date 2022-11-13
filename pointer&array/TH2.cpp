#include <iostream>
using namespace std;
int const size = 30;
int main(int argc, char const *argv[])
{
    cout << "Hello" << endl;
    int A[] = {1, 2, 9, 3, 7, 5}; // random() % 10
    int n = sizeof(A) / sizeof(A[0]);
    int *p, x, y;

    p = A;
    cout << "p's address:" << p << endl;
    cout << "p's value:" << *p << endl;

    cout << "displacement notation: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "(p + " << i << ")" << p + i << " | pointer's value: " << *(p + i) << endl;
    }
    cout << "index notation: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }

    return 0;
}