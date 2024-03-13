#include "SoPhuc.h"
#include <iostream>
using namespace std;
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}
void SoPhuc::Xuat() {
    cout << "So phuc: " << iThuc << " + " << iAo << "i" << endl;
}
SoPhuc SoPhuc::Tong(SoPhuc sp) {
    SoPhuc ketqua;
    ketqua.iThuc = iThuc + sp.iThuc;
    ketqua.iAo = iAo + sp.iAo;
    return ketqua;
}
SoPhuc SoPhuc::Hieu(SoPhuc sp) {
    SoPhuc ketqua;
    ketqua.iThuc = iThuc - sp.iThuc;
    ketqua.iAo = iAo - sp.iAo;
    return ketqua;
}
SoPhuc SoPhuc::Tich(SoPhuc sp) {
    SoPhuc ketqua;
    ketqua.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
    ketqua.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
    return ketqua;
}
SoPhuc SoPhuc::Thuong(SoPhuc sp) {
    SoPhuc ketqua;
    double mauSo = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    ketqua.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo) / mauSo;
    ketqua.iAo = (iAo * sp.iThuc - iThuc * sp.iAo) / mauSo;
    return ketqua;
}



