#include <iostream>
using namespace std;

int binomialCoefficients(int, int);
void printPascal(int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            cout << " " << binomialCoefficients(line, i);
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n = 7;
    cout << "triangle pascal : " << endl;
    printPascal(n);
    return 0;
}

int binomialCoefficients(int n, int k)
{
    int recursion = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; i++)
    {
        recursion *= (n - i);
        recursion /= (i + 1);
    }
    return recursion;
}