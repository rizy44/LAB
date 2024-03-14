#include "GioPhutGiay.h"
#include <iostream>
using namespace std;
void GioPhutGiay::Nhap() {
    cout << "Nhap gio: ";
    cin >> iGio;
    cout << "Nhap phut: ";
    cin >> iPhut;
    cout << "Nhap giay: ";
    cin >> iGiay;
}
void GioPhutGiay::Xuat() {
    cout << iGio << " gio, " << iPhut << " phut, " << iGiay << " giay." << endl;
}
void GioPhutGiay::TinhCongThemMotGiay() {
    iGiay++;
    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60) {
            iPhut = 0;
            iGio++;
            if (iGio >= 24) {
                iGio = 0;
            }
        }
    }
}
