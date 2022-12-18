#include <iostream>
#include <fstream>
using namespace std;

void input(int &a, int &b)
{
    cout << "Nhap  so a: ";
    cin >> a;
    cout << "Nhap  so b: ";
    cin >> b;
}

int sum(int &a, int &b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}

int main(int argc, char const *argv[])
{
    int a, b;
    ofstream outfile;
    outfile.open("bt1.txt");
    if (outfile.is_open())
        input(a, b);
    else
        cout << "Error\n";
    outfile << a << " + " << b << " = " << sum(a, b) << endl;
    outfile.close();
    return 0;
}
