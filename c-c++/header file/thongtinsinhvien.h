#include<iostream>
	using namespace std;
#include<string>
	struct sinhvien{
		string hoten;
		string mssv;
		float diem_ktlt;
		float diem_trr;
		float diem_cslt;
	};
	typedef struct sinhvien Sinhvien;
	void nhapthongtin(Sinhvien &sv);
	void xuatthongtin(Sinhvien sv);
