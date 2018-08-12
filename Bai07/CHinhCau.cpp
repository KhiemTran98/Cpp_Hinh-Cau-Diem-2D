#include<iostream>
#include"CHinhCau.h"
const double PI = 3.14159;
using namespace std;
//CHinhCau::CHinhCau()
//{
//	I = new CDiem2D();
//	r = 0;
//}
CHinhCau::CHinhCau(CDiem2D* I, double r)
{
	this->I = new CDiem2D(*I);
	this->r = r;
}
CHinhCau::~CHinhCau()
{
	delete I;
}
void CHinhCau::Nhap()
{
	cout << "Tam I" << endl;
	I->Nhap();
	cout << "Ban kinh r = ";
	cin >> r;
}
double CHinhCau::TinhDienTich()
{
	return 4 * PI * r * r;
}
double CHinhCau::TinhTheTich()
{
	return (4 / 3) * PI * r * r;
}