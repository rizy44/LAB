#pragma once
class PhanSo
{
	friend class TinhToan;
protected:
	int iTuSo;
	int iMauSo;
public:
	void Nhap();
	void Xuat();
	void RutGon();
};
class TinhToan 
{

protected:
	PhanSo ps1;
	PhanSo ps2;
	PhanSo KetQua;
public:
	void SetGiaTriHaiPhanSo();
	void Tong();
	void Hieu();
	void Thuong();
	void Tich();
	void SoSanh();
};
int UocChungLonNhat(int a, int b);
