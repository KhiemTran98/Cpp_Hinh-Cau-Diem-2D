#include<iostream>
#include<conio.h>
#include"CHinhCau.h"
using namespace std;
void main()
{
	//CHinhCau *hc = new CHinhCau();
	//cout << "Nhap hinh cau" << endl;
	//hc->Nhap();

	CDiem2D* I = new CDiem2D(0, 0);
	CHinhCau* hc = new CHinhCau(I, 0);

	cout << "\nDien tich: " << hc->TinhDienTich();
	cout << "\nThe tich: " << hc->TinhTheTich();
	
	delete hc;
	
	_getch();
}