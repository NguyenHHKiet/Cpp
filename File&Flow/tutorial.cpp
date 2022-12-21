#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inNhanVien;
    ofstream outSinhVien;
    int w = 2, so;
    string ten;
    inNhanVien.open("nhavien.txt");
    outSinhVien.open("sinhvien.txt"); // create file.txt
    if (outSinhVien.is_open() && inNhanVien.is_open())
    {
        cout << "Mo file thanh cong! Co the tiep tuc doc/ghi du lieu" << endl;
        outSinhVien << "Nguyen Huu Hoang Kiet" << '#' << w << endl;
        outSinhVien.close();
        // Hoang Kiet #2
        // doc file
        while (!inNhanVien.eof())
        {
            getline(inNhanVien, ten, '#');
            inNhanVien >> so;
            inNhanVien.ignore();
            if (inNhanVien.good())
            {
                cout << ten << ", " << so << endl;
            }
        }
        inNhanVien.close();
    }
    else
        cout << "Mo file khong thanh cong!" << endl;

    ofstream outFile;
    ifstream inFile;
    outFile.open("BTVD.txt", ios::app);
    int a, b, c, kq = 0;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;
    // ghi gia tri 3 so nguyen ra file cach nhau bang dau '-'
    if (outFile.is_open())
    {
        outFile << a << '-' << b << '-' << c << endl;
        outFile.close();
        cout << "Ghi file thanh cong!\n";
    }
    else
        cout << "Khong mo duoc file de ghi du lieu\n";
    // doc gia tri 3 so nguyen tu file cach nhau bang dau '-' va tinh tich
    inFile.open("BTVD.txt");
    if (inFile.is_open())
    {
        // while tinh tong cac dong da duoc tinh tich
        while (!inFile.eof())
        {
            inFile >> a;
            inFile.ignore(1);
            inFile >> b;
            inFile.ignore(1);
            inFile >> c;
            if (inFile.good())
                kq += a * b * c;
        }
        inFile.close();
        cout << "Ket qua Tong so tinh tich cua moi dong la: " << kq << endl;
    }
    else
        cout << "Khong the mo duoc file de doc du lieu\n";

    return 0;
}
