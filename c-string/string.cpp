#include <iostream>
#include <string>
using namespace std;

void display(string);

int main()
{
    string str1;

    cout << "Enter a string: ";
    getline(cin, str1);

    display(str1);

    return 0;
}

void display(string s)
{
    cout << "Entered string is: " << s << endl;
}
