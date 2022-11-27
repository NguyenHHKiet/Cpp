#include <iostream>
using namespace std;
int const size = 30;
int main(int argc, char const *argv[])
{
    // int A[] = {1, 2, 9, 3, 7, 5}; // random() % 10
    // int n = sizeof(A) / sizeof(A[0]);
    int *p, A[size], x, y, n;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> n;
    } while (!(n > 0));
    for (int i = 0; i < n; i++)
        A[i] = rand() % 10;

    p = A;

    cout << "displacement notation: " << endl;
    for (int i = 0; i < n; i++)
        cout << "(p + " << i << ") " << p + i << " | pointer's value: " << *(p + i) << endl;
    cout << "index notation: " << endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << "\t";

    return 0;
}