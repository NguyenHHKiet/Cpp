#include <iostream>
#include <algorithm>
const int MAX = 100;
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
void input(int a[], int n)
{
    cout << "Enter input value array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
//----------------------------------------------------------------
int main(int argc, char const *argv[])
{
    int A[MAX], n;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> n;
    } while (!(n > 0));
    input(A, n);
    // int A[] = {1, 2, 10, 3, 4, 5};
    // int n = sizeof(A) / sizeof(A[0]); // calculate by byte of elements, once element is 4 bytes
    cout << "Find minimum value: " << findMinRec(A, n) << endl;
    cout << "Find maximum value: " << findMaxRec(A, n) << endl;
    cout << "Find minimum value of pure: " << findMin(A, n) << endl;
    return 0;
}
