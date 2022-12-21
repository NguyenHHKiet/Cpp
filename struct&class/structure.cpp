#include <iostream>
using namespace std;
enum week
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
enum seasons
{
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};
enum suit
{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;
enum designFlags
{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};
struct Person
{
    char name[50];
    int age;
    float salary;
};
struct temp
{
    int i;
    float f;
};
struct Distance
{
    int feet;
    float inch;
};

Person getData(Person);
void displayData(Person); // Function declaration

int main()
{
    Person p;
    p = getData(p);
    // Function call with structure variable as an argument
    displayData(p);

    Distance *ptr, d;
    ptr = &d;

    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "Enter inch: ";
    cin >> ptr->inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << ptr->feet << " feet " << ptr->inch << " inches\n";

    week today;
    today = Wednesday;
    cout << "Day " << today + 1 << endl;

    seasons s;
    s = summer;
    cout << "Summer = " << s << endl;

    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes.\n";

    int myDesign = BOLD | UNDERLINE;
    //    00000001
    //  | 00000100
    //  ___________
    //    00000101
    cout << myDesign;
    return 0;
}
Person getData(Person p)
{

    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}
void displayData(Person p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}