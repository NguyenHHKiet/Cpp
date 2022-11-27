#include <iostream>
using namespace std;

int reverse(int num)
{
    if (num < 10)
    {
        cout << num;
        return num;
    }
    else
    {
        cout << num % 10;
        return reverse(num / 10);
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
    cout << "Reverse : " << endl;
    reverse(n);
    return 0;
}
