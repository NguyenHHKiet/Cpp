#include <iostream>
using namespace std;
int const MAX = 100;
void spiralMatrix(int a[][MAX], int n)
{                                 /*k is to assign the values to the array from 1...n*n */
    int len = n, k = 1, p = 0, i; /*len is used to update(decrease) array size so that values cans be assign to them */
    while (k <= n * n)
    {
        for (i = p; i < len; i++) /*Loop to access the first row of the array*/
        {
            a[p][i] = k++;
        }
        for (i = p + 1; i < len; i++) /*Loop tp access the last column of the array*/
        {
            a[i][len - 1] = k++;
        }
        for (i = len - 2; i >= p; i--) /*Loop to access the last row of the array*/
        {
            a[len - 1][i] = k++;
        }
        for (i = len - 2; i > p; i--) /*Loop to access the first column of the array*/
        {
            a[i][p] = k++;
        }
        p++, len = len - 1;
    }
    if (!n % 2) /*This block will run only if n is even*/
    {
        a[(n + 1) / 2][(n + 1) / 2] = n * n; /*It will assign the last value to the centre most element*/
    }
}
void displayArray(int a[][MAX], int n)
{
    cout << "Display value in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int array[MAX][MAX], N;
    do
    {
        cout << "Enter a spiral matrix of order n : ";
        cin >> N;
    } while (!(N >= 2 && N <= 10));
    spiralMatrix(array, N);
    displayArray(array, N);
    return 0;
}
