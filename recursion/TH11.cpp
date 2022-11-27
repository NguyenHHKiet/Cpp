#include <iostream>
const int MAX = 100;
int findSum(int a[], int n)
{
    if (n <= 0)
        return 0;
    return (findSum(a, n - 1) + a[n - 1]);
}
void input(int a[], int n)
{
    cout << "Enter input value array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int main(int argc, char const *argv[])
{
    int A[MAX], n;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> n;
    } while (!(n > 0));
    input(A, n);
    // int A[] = {1, 2, 3, 4, 5};
    // int n = sizeof(A) / sizeof(A[0]); // calculate by byte of elements, once element is 4 bytes
    cout << "Total Sum: " << findSum(A, n) << endl;
    return 0;
}
