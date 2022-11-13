#include <iostream>
#include <algorithm>

// pure function
int swapMin(int x, int y)
{
    return x > y ? x = y : y = x;
}
int findMin(int a[], int n)
{
    if (n == 1)
        return a[0];
    return swapMin(a[n - 1], findMin(a, n - 1));
}

// library functions
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
//----------------------------------------------------------------
int main(int argc, char const *argv[])
{
    int A[] = {1, 2, 10, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]); // calculate by byte of elements, once element is 4 bytes
    cout << "Find minimum value: " << findMinRec(A, n) << endl;
    cout << "Find maximum value: " << findMaxRec(A, n) << endl;
    cout << "Find minimum value of pure: " << findMin(A, n) << endl;
    return 0;
}
