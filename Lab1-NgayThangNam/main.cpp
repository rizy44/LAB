#include <iostream>
#include "NgayThangNam.h"
using namespace std;
int main()
{
	NgayThangNam Today;
	Today.Nhap();
	cout << "\nNgay hom nay la: ";
	Today.Xuat();
	Today.NgayThangNamTiepTheo();
	return 0;
}
