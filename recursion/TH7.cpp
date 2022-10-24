#include <iostream>
using namespace std;

int resultEven = 0;
int resultOdd = 0;

void sumEvenOdd(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
        {
            resultEven += n;
        }
        else
        {
            /* code */
            resultOdd += n;
        }
    }
    else
    {
        /* code */
        int temp = n % 10;
        if (temp % 2 == 0)
        {
            resultEven += temp;
        }
        else
        {
            /* code */
            resultOdd += temp;
        }

        sumEvenOdd(n / 10);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int n = 3457;
    sumEvenOdd(n);
    cout << "even: " << resultEven << endl;
    cout << "odd: " << resultOdd << endl;
    return 0;
}
