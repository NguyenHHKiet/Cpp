#include <iostream>
using namespace std;

double power(int num, int powerRaised)
{
    if (powerRaised != 0)
    {
        if (powerRaised < 0)
            return 1.0 / (num * power(num, -powerRaised - 1));
        return num * power(num, powerRaised - 1);
    }
    else
        return 1;
}

int main(int argc, char const *argv[])
{
    int number, powerRaised;
    cout << "Enter a number into function: ";
    cin >> number;
    cout << "Enter a power raised into function: ";
    cin >> powerRaised;
    cout << "Integer power " << number << "^" << powerRaised << " = " << power(number, powerRaised) << endl;
    return 0;
}
