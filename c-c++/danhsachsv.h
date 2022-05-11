#include"thongtinsinhvien.h"
#include<iostream>
	using namespace std;
	struct danhsach{
		Sinhvien a[100];
		int n;
	};
	typedef struct danhsach Danhsach;
	void nhapdanhsach(Danhsach &ds);
	void xuatdanhsach(Danhsach ds);
