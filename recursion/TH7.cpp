#include <iostream>
using namespace std;

int resultEven = 0;
int resultOdd = 0;

void sumEvenOdd(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            resultEven += n;
        else
            resultOdd += n;
    }
    else
    {
        int temp = n % 10;
        if (temp % 2 == 0)
            resultEven += temp;
        else
            resultOdd += temp;
        sumEvenOdd(n / 10);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> n;
    } while (!(n > 0));
    sumEvenOdd(n);
    cout << "Sum of even: " << resultEven << endl;
    cout << "Sum of odd: " << resultOdd << endl;
    return 0;
}
