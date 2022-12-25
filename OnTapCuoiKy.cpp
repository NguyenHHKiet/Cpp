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
void nhap(Sach *);
void xuat(Sach *);
int main(int argc, char const *argv[])
{
    Sach *ptr = new Sach[20];
    ptr = s;
    ifstream inFile;
    nhap(ptr);
    delete[] ptr;
    return 0;
}
void nhap(Sach *s)
{
    cout << "Enter information of book: " << endl;
    ofstream outFile;
    outFile.open("OnTapCuoiKy.txt", ios::app);
    char chon;
    int i = 0;
    // storing information
    if (outFile.is_open())
    {
        do
        {
            // s[i].maSach = "Sp" + i + 1;
            cout << "Ma sach:  "
                 << "Sp" << setw(2) << setfill('0') << i + 1 << "," << endl;
            cout << "Ten sach: ";
            getline(cin, s[i].tenSach);

            cout << "Ngay Xuat Ban: ";
            cin >> s[i].ngayThangXuatBan.ngay;
            cout << "Thang Xuat Ban: ";
            cin >> s[i].ngayThangXuatBan.thang;
            cout << "Nam Xuat Ban: ";
            cin >> s[i].ngayThangXuatBan.nam;
            outFile << "Sp" << setw(2) << setfill('0') << i + 1
                    << "#" << s[i].tenSach << "#" << s[i].ngayThangXuatBan.ngay << "-"
                    << s[i].ngayThangXuatBan.thang << '-' << s[i].ngayThangXuatBan.nam << endl;
            cout << "Ban co muon tiep tuc(Y/N): ";
            cin >> chon;
            if (chon == 'N')
                break;
            i++;
            cin.ignore(); // thêm vào để xoá bộ nhớ đệm, tránh bị trôi lệnh
        } while (chon == 'Y' && i != 20);
    }
    else
        cout << "Error\n";
}
void xuat(Sach *s)
{
}