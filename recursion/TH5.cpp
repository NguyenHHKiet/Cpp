#include <iostream>
using namespace std;

int count;

int countNumberNot(int n)
{
    if (n / 10 == 0)
    {
        return 1;
    }
    else
    {
        count++;
        return 1 + countNumberNot(n / 10);
    }
}

int main()
{
    int n = 123456789;
    cout << "n = " << countNumberNot(n) << endl;
    return 0;
}