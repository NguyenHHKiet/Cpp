#include <iostream>
using namespace std;

int countNumberNot(int n)
{
    if (n / 10 == 0)
        return 1;
    else
        return 1 + countNumberNot(n / 10);
}

int main()
{
    int n;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> n;
    } while (!(n > 0));
    cout << "n = " << countNumberNot(n) << endl;
    return 0;
}