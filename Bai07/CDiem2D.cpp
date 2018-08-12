#include<iostream>
#include"CDiem2D.h"
using namespace std;
CDiem2D::CDiem2D()
{
	x = y = 0;
}
CDiem2D::CDiem2D(double x, double y)
{
	this->x = x;
	this->y = y;
}
CDiem2D::~CDiem2D() {}
void CDiem2D::Nhap()
{
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
}