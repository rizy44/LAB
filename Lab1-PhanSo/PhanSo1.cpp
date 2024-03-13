#include "PhanSo1.h"
#include <iostream>
using namespace std;
void PhanSo::Nhap()
{
    cout << "\nNhap tu so: ";
    cin >> iTuSo;
    cout << "Nhap mau so: ";
    cin >> iMauSo;
}

void PhanSo::Xuat()
{
    if (iMauSo == 0)
    {
        cout << "Phan so loi!";
    }
    else if (iTuSo == 0)
    {
        cout << 0;
    }else if (iTuSo % iMauSo == 0)
    {
        cout << iTuSo / iMauSo;
    }
    else
    {
        cout << iTuSo << "/" << iMauSo ;
    }
}

int UocChungLonNhat(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void PhanSo::RutGon()
{
    int UCLN = UocChungLonNhat(iTuSo, iMauSo);
    iTuSo = iTuSo / UCLN;
    iMauSo = iMauSo / UCLN;
   
}

void TinhToan::SetGiaTriHaiPhanSo()
{
    cout << "\nNhap phan so 1: ";
    ps1.Nhap();
    cout << "\nNhap phan so 2: ";
    ps2.Nhap();
}

void TinhToan::Tong()
{
    KetQua.iMauSo = ps1.iMauSo * ps2.iMauSo;
    KetQua.iTuSo = ps1.iTuSo * ps2.iMauSo + ps2.iTuSo * ps1.iMauSo;
    KetQua.RutGon();
    cout << "\nTong 2 phan so la: ";
    KetQua.Xuat();
}
void TinhToan::Hieu()
{
    KetQua.iMauSo = ps1.iMauSo * ps2.iMauSo;
    KetQua.iTuSo = ps1.iTuSo * ps2.iMauSo - ps2.iTuSo * ps1.iMauSo;
    KetQua.RutGon();
    cout << "\nHieu 2 phan so la: ";
    KetQua.Xuat();
}

void TinhToan::Tich()
{
    KetQua.iMauSo = ps1.iMauSo * ps2.iMauSo;
    KetQua.iTuSo = ps2.iTuSo * ps1.iTuSo;
    KetQua.RutGon();
    cout << "\nTich 2 phan so la: ";
    KetQua.Xuat();
}
void TinhToan::Thuong()
{
    KetQua.iMauSo = ps1.iMauSo * ps2.iTuSo;
    KetQua.iTuSo = ps1.iTuSo * ps2.iMauSo;
    KetQua.RutGon();
    cout << "\nThuong 2 phan so la: ";
    KetQua.Xuat();
}
