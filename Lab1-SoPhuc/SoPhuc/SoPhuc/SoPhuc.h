#pragma once
class SoPhuc
{
private:
    double iThuc;
    double iAo;

public:
    void Nhap();
    void Xuat();
    SoPhuc Tong(SoPhuc sp);
    SoPhuc Hieu(SoPhuc sp);
    SoPhuc Tich(SoPhuc sp);
    SoPhuc Thuong(SoPhuc sp);
};

