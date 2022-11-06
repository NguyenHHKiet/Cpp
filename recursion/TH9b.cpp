#include <iostream>
#include <cmath>
using namespace std;

double binaryToDecimal(int binary, int i = 0)
{
    if (binary == 0)
    {
        return 0;
    }

    return (binary % 10) * pow(2.0, i) + binaryToDecimal(binary / 10, i + 1);
}

int main(int argc, char const *argv[])
{
    int n = 1001;
    cout << "decimal = " << binaryToDecimal(n) << endl;
    return 0;
}
