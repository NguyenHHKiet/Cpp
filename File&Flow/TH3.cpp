#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void input(int &a, int &b, int &c)
{
    cout << "Nhap  so a: ";
    cin >> a;
    cout << "Nhap  so b: ";
    cin >> b;
    cout << "Nhap  so c: ";
    cin >> c;
}
int avenge(int &a, int &b, int &c)
{
    return (a + b + c) / 3;
}

int main(int argc, char const *argv[])
{
    int a, b, c, m, n, v, total;
    ofstream outfile;
    ifstream infile;
    outfile.open("bt3.txt");
    if (outfile.is_open())
    {
        input(a, b, c);
        outfile << a << "#" << b << "#" << c << endl;
    }
    else
        cout << "Error\n";

    infile.open("bt3.txt");
    infile >> m;
    infile.ignore(); // bo #
    infile >> n;
    infile.ignore(); // bo #
    infile >> v;
    infile.ignore(); // bo qua > newline
    cout << m << "  " << n << "  " << v << endl;
    cout << "Avenge: " << avenge(m, n, v) << endl;
    infile.close();
    outfile.close();
    return 0;
}
