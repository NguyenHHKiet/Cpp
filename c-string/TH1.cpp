#include <iostream>
#include <string>
using namespace std;

void character(char *sPtr, int &check)
{
    for (int i = 0; i < strlen(sPtr); i++)
    {
        if (check == 0)
        {
            sPtr[i] = (char)toupper(sPtr[i]);
            check = 1;
        }
        else if (isspace(*(sPtr + i)))
            check = 0;
    }
    check = 0;
}
void display(char *sPtr)
{
    for (int i = 0; i < strlen(sPtr); i++)
        cout << *(sPtr + i);
    cout << endl;
}
int main()
{
    char v1[] = "string match", v2[] = "string un match";
    char *str_inp1, *str_inp2;
    str_inp1 = v1, str_inp2 = v2;
    int check = 0;

    // a, so sánh xem chuổi nào dài hơn
    if (strcmp(str_inp1, str_inp2) == 0)
        cout << "Both the input strings are equal." << endl;
    else
    {
        cout << "The input strings are not equal." << endl;
        cout << "str_inp1: " << strlen(str_inp1) << endl;
        cout << "str_inp2: " << strlen(str_inp2) << endl;
    }

    // b, chuyển đổi in hoa ký tự đầu
    character(str_inp1, check);
    character(str_inp2, check);
    display(str_inp1);
    display(str_inp2);

    // c, nối chuổi thứ 2 vào chuổi thứ 1
    strcat(str_inp1, str_inp2);
    cout << str_inp1 << endl;
    return 0;
}