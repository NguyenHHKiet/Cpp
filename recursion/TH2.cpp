#include <iostream>
using namespace std;

int expression(int);
int exponential(int);

int main(int argc, char const *argv[])
{
    int count;
    cout << "Hello" << endl;
    do
    {
        cout << "Enter a count into function: ";
        cin >> count;
    } while (!(count > 0));

    cout << "Exponential without negative = " << expression(count) << endl;
    return 0;
}

int expression(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return exponential(num) + expression(num - 1);
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