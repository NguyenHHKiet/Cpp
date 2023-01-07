#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;
struct NTN
{
    int ngay;
    int thang;
    int nam;
};
struct Sach
{
    string maSach;
    string tenSach;
    NTN ngayThangXuatBan;
} s[20];
void nhap(Sach *, int);
void xuat(Sach *, int &);
void sapXap(Sach *, int &, int &);

int main(int argc, char const *argv[])
{
    Sach *ptr = new Sach[20];
    int n, dem = 0;
    ptr = s;
    do
    {
        cout << "Enter the number of n: ";
        cin >> n;
        if (n > 20 || n <= 0)
            cout << "Invalid number\n";
    } while (n > 20 || n <= 0);

    // nhap(ptr, n);
    cout << "--\tXuat\t--\n";
    xuat(ptr, n);
    cout << "--\tSap xep\t--\n";
    sapXap(ptr, n, dem);
    cout << "--\tDem so sach nam 2019\t--\n";
    cout << dem << endl;
    delete[] ptr;
    ptr = NULL;
    return 0;
}
void nhap(Sach *s, int n)
{
    cout << "Enter information of book: " << endl;
    ofstream outFile;
    outFile.open("OnTapCuoiKy.txt", ios::app);
    if (outFile.is_open())
    {
        outFile << n << endl;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            cout << "Ma sach:  "
                 << "Sp" << setw(2) << setfill('0') << i + 1 << "," << endl;
            cout << "Ten sach: ";
            getline(cin, s->tenSach);
            cout << "Ngay Xuat Ban: ";
            cin >> s->ngayThangXuatBan.ngay;
            cout << "Thang Xuat Ban: ";
            cin >> s->ngayThangXuatBan.thang;
            cout << "Nam Xuat Ban: ";
            cin >> s->ngayThangXuatBan.nam;
            outFile << "Sp" << setw(2) << setfill('0') << i + 1
                    << "#" << s->tenSach << "#" << s->ngayThangXuatBan.ngay << "-"
                    << s->ngayThangXuatBan.thang << '-' << s->ngayThangXuatBan.nam << endl;

            cin.ignore();
        }
        outFile.close();
        cout << "Ghi file thanh cong!\n";
    }
    else
        cout << "Error\n";
}
void docFile(Sach *s, int &n)
{
    ifstream inFile;
    inFile.open("OnTapCuoiKy.txt");
    if (inFile.is_open())
    {
        inFile >> n;
        inFile.ignore();
        int i = 0;
        while (!inFile.eof())
        {
            getline(inFile, s[i].maSach, '#');
            getline(inFile, s[i].tenSach, '#');
            inFile >> s[i].ngayThangXuatBan.ngay;
            inFile.ignore();
            inFile >> s[i].ngayThangXuatBan.thang;
            inFile.ignore();
            inFile >> s[i].ngayThangXuatBan.nam;
            inFile.ignore();
            i++;
        }
        inFile.close();
        cout << "Doc file thanh cong!! " << endl;
    }
    else
        cout << "Khong the mo duoc file de doc du lieu\n";
}
void XuatDoc(Sach *s)
{
    cout << s->maSach << " " << s->tenSach << " "
         << s->ngayThangXuatBan.ngay << "-"
         << s->ngayThangXuatBan.thang << "-"
         << s->ngayThangXuatBan.nam << endl;
}
void xuat(Sach *s, int &n)
{
    docFile(s, n);
    int i = 0;
    while (i < n)
    {
        XuatDoc(s);
        i++, s++;
    }
}
void swapNums(Sach *nums, int first, int second)
{
    Sach curr = nums[first];
    nums[first] = nums[second];
    nums[second] = curr;
}
void sapXap(Sach *s, int &n, int &dem)
{
    bool isSwapped;
    docFile(s, n);
    for (int i = 0; i < n; i++)
    {
        isSwapped = false;
        for (int j = 1; j < n - i; j++)
        {
            if (s[j].ngayThangXuatBan.nam < s[j - 1].ngayThangXuatBan.nam)
            {
                swapNums(s, j, (j - 1));
                isSwapped = true;
            }
            else if (s[j].ngayThangXuatBan.nam == s[j - 1].ngayThangXuatBan.nam && s[j].ngayThangXuatBan.thang < s[j - 1].ngayThangXuatBan.thang)
            {
                swapNums(s, j, (j - 1));
                isSwapped = true;
            }
            else if (s[j].ngayThangXuatBan.nam == s[j - 1].ngayThangXuatBan.nam && s[j].ngayThangXuatBan.thang == s[j - 1].ngayThangXuatBan.thang && s[j].ngayThangXuatBan.ngay < s[j - 1].ngayThangXuatBan.ngay)
            {
                swapNums(s, j, (j - 1));
                isSwapped = true;
            }
        }
        if (!isSwapped)
            break;
    }
    int i = 0;
    while (i < n)
    {
        XuatDoc(s);
        if (s->ngayThangXuatBan.nam == 2019)
            dem++;
        i++, s++;
    }
}
