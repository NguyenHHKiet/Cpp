#include <iostream>
#include <algorithm>

int findMinRec(int a[], int n)
{
    if (n == 1)
        return a[0];
    return min(a[n - 1], findMinRec(a, n - 1));
}
int findMaxRec(int a[], int n)
{
    if (n == 1)
        return a[0];
    return max(a[n - 1], findMaxRec(a, n - 1));
}
int main(int argc, char const *argv[])
{
    int A[] = {1, 2, 10, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]); // calculate by byte of elements
    cout << "Find minimum value: " << findMinRec(A, n) << endl;
    cout << "Find maximum value: " << findMaxRec(A, n) << endl;
    return 0;
}
