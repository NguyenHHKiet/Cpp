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
    /* code */
    int n = 1234599;
    cout << "n = " << countNumberNot(n) << endl;
    return 0;
}