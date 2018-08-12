#include"CDiem2D.h"
class CHinhCau
{
private:
	CDiem2D* I;
	double r;
public:
	CHinhCau();
	CHinhCau(CDiem2D* I, double r);
	~CHinhCau();
	void Nhap();
	double TinhDienTich();
	double TinhTheTich();
};