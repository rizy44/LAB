#include <iostream>
#include "NgayThangNam.h"
using namespace std;
NgayThangNam::NgayThangNam()
{
	iNgay = 0;
	iThang = 0;
	iNam = 0;
}
void NgayThangNam::Nhap()
{
	cout << "Nhap ngay thang nam: ";
	cin >> iNgay >> iThang >> iNam;
}
void NgayThangNam::Xuat()
{
	cout << iNgay << "/" << iThang << "/" << iNam;
}
void NgayThangNam::NgayThangNamTiepTheo()
{
	NgayThangNam NextDay;
	NextDay.iNgay = iNgay + 1;
	NextDay.iThang = iThang;
	NextDay.iNam = iNam;
	if (iNgay == 31 && (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10 || iThang == 12))
	{
		NextDay.iNgay = 1;
		NextDay.iThang++;
	}
	if (iNgay == 28 && iThang == 2)
	{
		if (iNam % 4 == 0)
		{
			NextDay.iNgay = 29;
		}
		else 
		{
			NextDay.iNgay = 1;
			NextDay.iThang++;
		}	
	}
	if (iNgay == 31 && iThang == 12)
	{
		NextDay.iNgay = 1;
		NextDay.iThang = 1;
		NextDay.iNam++;
	}
	cout << "\nNgay tiep theo la: ";
	NextDay.Xuat();
}