#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

int binaryToDecimal(string binary, int i = 0)
{
    int n = binary.length();
    if (i == n - 1)
    {
        cout << binary[i] - '0';
        return binary[i] - '0';
    }

    return ((binary[i] - '0') << (n - i - 1)) +
           binaryToDecimal(binary, i + 1);
}

int main(int argc, char const *argv[])
{
    string n = "100";
    cout << "decimal = " << binaryToDecimal(n) << endl;
    return 0;
}
