#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main() {
    SoPhuc sp1, sp2, ketqua;

    cout << "Nhap so phuc thu nhat:\n";
    sp1.Nhap();

    cout << "\nNhap so phuc thu hai:\n";
    sp2.Nhap();

    ketqua = sp1.Tong(sp2);
    cout << "\nTong hai so phuc: ";
    ketqua.Xuat();

    ketqua = sp1.Hieu(sp2);
    cout << "\nHieu hai so phuc: ";
    ketqua.Xuat();

    ketqua = sp1.Tich(sp2);
    cout << "\nTich hai so phuc: ";
    ketqua.Xuat();

    ketqua = sp1.Thuong(sp2);
    cout << "\nThuong hai so phuc: ";
    ketqua.Xuat();

    return 0;
}