#include <iostream>
#include <string>
using namespace std;
const int MAXSIZE = 50;
enum Thu
{
    hai,
    ba,
    tu,
    nam,
    sau,
    bay,
    chunhat
};

struct intArr
{
    int arr[MAXSIZE];
    int n;
};
struct SinhVien
{
    string hoTen;
    string diaChi;
    int tuoi;
    double diem;
};
struct NTN
{
    int ngay, thang, nam;
};
struct DiaChi
{
    string so, duong, quan, tp;
};
struct NhanVien
{
    int maSo;
    string hoLot;
    string ten;
    NTN ngaySinh;
    DiaChi diaChi;
    string phongBan;
    double luong;
    double thuong;
};

class Point
{
private:
    int x, y;

public:
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
};
// int Point::getX()
// {
//     return x;
// }
// int Point::getY()
// {
//     return y;
// }
// void Point::set(int a, int b)
// {
//     x = a;
//     y = b;
// }
class phanso
{
private:
    int tuso, mauso;

public:
    phanso()
    {
        tuso = 0;
        mauso = 0;
    };
    phanso(int a, int b);
    ~phanso(){}; // huy constructor
    int getts() { return tuso; }
    int getms() { return mauso; }
    void setts(int a) { tuso = a; }
    void setms(int b) { mauso = b; }
    phanso tich(phanso ps1, phanso ps2);
};
phanso::phanso(int a, int b)
{
    setts(a);
    setms(b);
}
phanso phanso::tich(phanso ps1, phanso ps2)
{
    phanso kq;
    kq.setts(ps1.tuso * ps2.tuso);
    kq.setms(ps1.mauso * ps2.mauso);
    return kq;
}

void nhap(SinhVien &sv);
void xuat(const SinhVien sv);

int main()
{
    Thu ngay;
    ngay = tu;
    cout << ngay << endl; // 2
    phanso ps1, ps2, kq;
    cout << ps1.getts() << endl;
    int ts1, ts2, ms1, ms2;
    cout << "Nhap tu so va mau so phan so 1: ";
    cin >> ts1 >> ms1;
    cout << "Nhap tu so va mau so phan so 2: ";
    cin >> ts2 >> ms2;
    ps1.setts(ts1);
    ps1.setms(ms1);
    ps2.setts(ts2);
    ps2.setms(ms2);
    kq = kq.tich(ps1, ps2);
    cout << kq.getts() << "/" << kq.getms() << endl;
    Point s;
    int m, n;
    cout << "Nhap hai so nguyen: \n";
    cin >> m >> n;
    s.set(m, n);
    cout << s.getX() << "-" << s.getY() << endl;

    SinhVien sv;
    sv.hoTen = "Nguyen Huu Hoang Kiet";
    sv.diaChi = "Thanh pho Ho Chi Minh";
    sv.tuoi = 22;
    sv.diem = 7.2;
    // cout << "Nhap ho ten sinh vien: ";
    // getline(cin, sv.hoTen);
    // cout << "Nhap dia chi: ";
    // getline(cin, sv.diaChi);
    // cout << "Nhap tuoi: ";
    // cin >> sv.tuoi;
    // cout << "Nhap diem: ";
    // cin >> sv.diem;

    cout << "Thong tin cua sinh vien la:\nTen: "
         << sv.hoTen << "\nDia chi: " << sv.diaChi << "\nTuoi: " << sv.tuoi << "\nDiem: " << sv.diem << endl;

    // struct and array
    intArr a;
    a.arr[1] = 3;
    a.n = 15;
    NhanVien nv[50];
    nv->hoLot = "Nguyen Huu";
    nv->ten = "Hoang Kiet";
    nv->ngaySinh.ngay = 12;
    nv->ngaySinh.thang = 12;
    nv->ngaySinh.nam = 2000;
    cout << "Xuat: \n";
    cout << nv->hoLot << "\t,Ten: " << nv->ten << endl;
    cout << nv->ngaySinh.ngay << " " << nv->ngaySinh.thang << " " << nv->ngaySinh.nam << endl;

    NhanVien as;
    as.ngaySinh.nam = 2022;
    cout << as.ngaySinh.nam << endl;

    NhanVien ds;
    NhanVien *pds;
    pds = &ds;
    // (*pds).maSo = 5;
    pds->maSo = 12;
    cout << pds->maSo << endl;
    return 0;
}
