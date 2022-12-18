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
    int a, b, m, n, total;
    ofstream outfile;
    ifstream infile;
    outfile.open("bt2.txt");
    if (outfile.is_open())
    {
        input(a, b);
        total = sum(a, b);
        outfile << a << " + " << b << " = " << total << endl;
    }
    else
        cout << "Error\n";

    infile.open("bt2.txt");
    infile >> m >> n >> total;
    cout << "Total: " << total << endl;
    infile.close();
    outfile.close();
    return 0;
}
