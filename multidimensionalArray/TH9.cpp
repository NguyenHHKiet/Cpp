#include <iostream>
using namespace std;
int const MAX = 100;
void initMatrix(int a[][MAX], int n)
{
    int value = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++, value++)
            a[j][i] = value;
        i++;
        if (i == n)
            break;
        for (int j = n; j > 0; value++)
        {
            --j;
            a[j][i] = value;
        }
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
    { // Efficiently compute sums of diagonals of a matrix
        cout << "Enter a square matrix of order n : ";
        cin >> N;
    } while (!(N >= 2 && N <= 10));
    initMatrix(array, N);
    displayArray(array, N);
    return 0;
}
