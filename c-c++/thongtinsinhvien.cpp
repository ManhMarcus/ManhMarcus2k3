#include"thongtinsinhvien.h"
	void nhapthongtin(Sinhvien &sv){
		while(getchar()!='\n');
		do{
		cout<<"\n\n\t\t Nhap vao ma so sinh vien: ";
		getline(cin,sv.mssv);
		if(sv.mssv.length()>20){
			cout<<"Gia tri khong hop le !";
		}
		}while(sv.mssv.length()>20);
		do{
		cout<<"\n\n\t\t Nhap vao ho ten sinh vien: ";
		getline(cin,sv.hoten);
		if(sv.hoten.length()>30){
			cout<<"Gia tri khong hop le !";
		}
		}while(sv.hoten.length()>20);
		do{
			cout<<"Nhap diem KTLT: ";
			cin>>sv.diem_ktlt;
			if(sv.diem_ktlt<0.0 || sv.diem_ktlt>10){
				cout<<"Diem khong hop le !";
			}
		}while(sv.diem_ktlt<0.0 || sv.diem_ktlt>10);
		do{
			cout<<"Nhap diem TRR: ";
			cin>>sv.diem_trr;
			if(sv.diem_trr<0.0 || sv.diem_trr>10){
				cout<<"Diem khong hop le !";
			}
		}while(sv.diem_trr<0.0 || sv.diem_trr>10);
		do{
			cout<<"Nhap diem CSLT: ";
			cin>>sv.diem_cslt;
			if(sv.diem_cslt<0.0 || sv.diem_cslt>10){
				cout<<"Diem khong hop le !";
			}
		}while(sv.diem_cslt<0.0 || sv.diem_cslt>10);
	}
	void xuatthongtin(Sinhvien sv){
		cout<<"MSSV: "<<sv.mssv;
		cout<<"Ho va ten: "<<sv.hoten;
		cout<<"Diem KTLT: "<<sv.diem_ktlt;
		cout<<"Diem TRR: "<<sv.diem_trr;
		cout<<"Diem CSLT: "<<sv.diem_cslt;
	}
