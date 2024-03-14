#include <iostream>
#include "GioPhutGiay.h"

using namespace std;

int main() {
    GioPhutGiay thoiGian;
    cout << "Nhap thoi gian hien tai:\n";
    thoiGian.Nhap();
    cout << "Thoi gian hien tai:\n";
    thoiGian.Xuat();
    thoiGian.TinhCongThemMotGiay();
    cout << "\nThoi gian sau khi cong them mot giay:\n";
    thoiGian.Xuat();
    return 0;
}
