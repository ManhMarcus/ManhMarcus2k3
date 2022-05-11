#include<iostream>
	using namespace std;
#include<iomanip>
#include<graphics.h>
	struct sinhvien{
		string hoten;
		string mssv;
		float diem;
	};
	typedef struct sinhvien Sinhvien;
	struct danhsach{
		Sinhvien a[100];
		int n;
	};
	typedef struct danhsach Danhsach;
	void nhap1sinhvien(Sinhvien &sv){
		fflush(stdin);
		cout<<"\nNhap ho ten: ";
		getline(cin, sv.hoten);
		cout<<"Nhap ma so sinh vien: ";
		fflush(stdin);
		getline(cin, sv.mssv);
		cout<<"Nhap diem so cua sinh vien: ";
		cin>>sv.diem;
	}
	void xuat1sinhvien(Sinhvien sv){
		cout<<setw(30)<<left<<sv.hoten<<"\t";
		cout<<setw(12)<<left<<sv.mssv<<"\t";
		cout<<setw(4)<<left<<sv.diem<<"\t";
	}
	void nhapdanhsach(Danhsach &ds){
		for(int i=0;i<ds.n;i++){
			cout<<"\nNhap thong tin sinh vien thu "<<i+1;
			nhap1sinhvien(ds.a[i]);
		}
	}
	void xuatdanhsach(Danhsach ds){
		for(int i=0;i<ds.n;i++){
			cout<<endl;
			xuat1sinhvien(ds.a[i]);
		}
	}
	int main(){
		Danhsach ds;
		Sinhvien sv;
		cout<<"Nhap so luong sinh vien: ";
		cin>>ds.n;
		cout<<"\n\n\t\tNhap thong tin sinh vien\n\n";
		nhapdanhsach(ds);
		cout<<"\n\n\t\tXuat danh sach thong tin sinh vien\n\n";
		textcolor(4);
		cout<< setw(30)<<left<<"Ho va Ten"<<"\t"<<setw(12)<<left<<"MSSV"<<"\t"<<setw(4)<<left<<"Diem"<<"\t";
		cout<<endl;
		textcolor(10);
		xuatdanhsach(ds);
		
	}
