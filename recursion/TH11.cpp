#include <iostream>

int findSum(int a[], int n)
{
    if (n <= 0)
        return 0;
    return (findSum(a, n - 1) + a[n - 1]);
}
int main(int argc, char const *argv[])
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]); // calculate by byte of elements
    cout << "Total Sum: " << findSum(A, n) << endl;
    return 0;
}
