#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[7] = "chao!";
    char *a;
    a = arr;
    cout << a << endl;
    cout << a[0] << endl;
    cout << a[6] << endl;

    char hoTen[50];

    // cin.get(hoTen, 50);
    // cout << hoTen << endl;
    // cin.ignore();
    // bo qua enter va 1 ky trong luong nhap
    //  or cin.ignore(1);
    // neu ko dung lenh cin.ignore() thi nhap thu 2 se ko dien ra
    // cin.getline(hoTen, 50, '\n');
    // nhap toi da 49 ky tu ke ca khoang trang, ky '\n' se duoc bo qua
    // cout << hoTen << endl;

    char ac[10];
    cout << "Nhap chuoi: ";
    cin.get(ac, 10);
    // cin >> ac;
    // cin se dung lai khi gap khoang trang as as 2
    cout << strlen(ac) << endl; // as as 8

    int demKyTu = 0;
    while (ac[demKyTu] != '\0')
        demKyTu++;
    cout << demKyTu << endl;

    char *p = "Xuan Minh Phu A B ";
    int dem = 0;
    while (*p)
    {
        if (isspace(*p))
            dem++;
        p++;
    }
    cout << "So khoang trang la: " << dem << endl;

    // ham strcat()
    // cong dung: noi chuoi s2 vao cuoi chuoi s1
    // ham strncat()
    // cong dung: noi n ky tu cua chuoi s2 vao cuoi chuoi s1
    char s1[20] = "chao ban", s2[] = "trang";
    // strcat(s1, s2);
    strncat(s1, s2, 2);
    cout << s1 << endl;

    // dnh vi lan xuat hin dau tien cua ky tu
    char *s = "Dai Hoc Mo TpHCM";
    char *pr;
    pr = strchr(s, 'o');
    cout << pr << endl;

    // ham strcmp()
    // cong dng: so sanh chuoi 1 voi chuoi 2
    // ham strncmp()
    // cong dng: so sanh chuoi 1 voi chuoi 2 nhung so sanh den n ky tu
    char *sa1 = "ABS";
    char *sa2 = "ABSd";
    if (strcmp(sa1, sa2) == 0)
        cout << "2 chuoi bang nhau\n";
    else
        cout << "s1 lon hon s2\n";

    if (strncmp(sa1, sa2, 3) == 0)
        cout << "2 chuoi bang nhau\n";
    else
    {
        if (strcmp(sa1, sa2) < 0)
            cout << "s1 nho hon s2\n";
        else
            cout << "s1 lon hon s2\n";
    }

    // ham strcpy()
    // ham strncpy()
    // cong dung: sao chep chuoi s2 vao mang ky tu s1. tra ve gia tri s1
    char sd1[30] = "Truong";
    char *sd2 = "Dai hoc Mo TpHCM";
    cout << "Chuoi sd1 truoc khi sao chep: " << sd1 << endl;
    // strcpy(sd1, sd2);
    strncpy(sd1, sd2, 7);
    cout << "Chuoi sd1 sau khi sao chep: " << sd1 << endl;

    // ham strlen()

    // ham strtok()
    // cong dung: ngat s1 thanh cac token boi ky tu cua s2
    char qw1[] = "Dai hoc Mo TpHCM";
    char qw2[] = " ";
    char *ptok = strtok(qw1, qw2);
    while (ptok != NULL)
    {
        cout << ptok << endl; // Dai //hoc //Mo //TpHCM
        ptok = strtok(NULL, qw2);
    }

    // ham atof()
    // cong dung: chuyen chuoi s thanh gia tri double
    char *df = "209.23";
    double kq = atof(df);
    cout << kq << endl;
    // ham atoi()
    // cong dung: chuyen chuoi s thanh gia tri int
    // ham atol()
    // cong dung: chuyen chuoi s thanh gia tri long int

    string address;
    cout << "\nNhap chuoi dia chi: ";
    getline(cin, address, '#');
    cout << address << endl;

    return 0;
}
