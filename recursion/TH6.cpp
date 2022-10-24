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
    /* code */
    int n = 6789;
    reverse(n);

    return 0;
}
