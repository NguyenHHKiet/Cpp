#include <iostream>
using namespace std;

int s1Expression(int);
int s2Expression(int);
double s3Expression(int);
int s4Expression(int);
int exponential(int);

int main(int argc, char const *argv[])
{
    int n = 3, count;
    cout << "Hello" << endl;

    do
    {
        cout << "Enter a odd count into function: ";
        cin >> count;
    } while (!(count > 0 && count % 2 == 1));

    cout << "S1 = " << s1Expression(n) << endl;
    cout << "S2 = " << s2Expression(n) << endl;
    cout << "S3 = " << s3Expression(count) << endl;
    cout << "S4 = " << s4Expression(n) << endl;
    return 0;
}

int s1Expression(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + s1Expression(num - 1);
    }
}
int s2Expression(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * num + s2Expression(num - 1);
    }
}
double s3Expression(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return (1.0 / num) + s3Expression(num - 2);
    }
}
int s4Expression(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return exponential(num) + s4Expression(num - 1);
    }
}
int exponential(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * exponential(num - 1);
    }
}