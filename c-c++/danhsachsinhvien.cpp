#include<stdio.h>
#include<string.h>
#include"dohoa.h"
	typedef struct{
		char hoten[25];
		float diem_toan,diem_ly,diem_hoa;
		char namsinh[10];
	}sinhvien;
	typedef struct{
		sinhvien *a;
		int n;
	}danhsach;
	void nhap1sinhvien(sinhvien &sv){
		printf("Nhap ho ten sinh vien: ");
		fflush(stdin);
		gets(sv.hoten);
		do
		{
			printf("Nhap nam sinh: "); fflush(stdin); gets(sv.namsinh);
			if(strlen(sv.namsinh) != 4)
			{
			textcolor(4);printf("\n\t\tNam sinh khong hop le ! Vui long nhap lai.\n");textcolor(7);
			}
		}while(strlen(sv.namsinh) != 4);
		do
		{
			printf("Nhap diem mon Toan Hoc: ");scanf("%f",&sv.diem_toan);
			if(sv.diem_toan<0 || sv.diem_toan>10) 
			{
			textcolor(4);printf("\n\t\tDiem so khong hop le ! Vui long nhap lai.\n");textcolor(7);
			}
		}while(sv.diem_toan<0 || sv.diem_toan>10);
		do
		{
			printf("Nhap diem mon Vat Ly: ");scanf("%f",&sv.diem_ly);
			if(sv.diem_ly<0 || sv.diem_ly>10) 
			{
			textcolor(4);printf("\n\t\tDiem so khong hop le ! Vui long nhap lai.\n");textcolor(7);
			}
		}while(sv.diem_ly<0 || sv.diem_ly>10);
		do
		{
			printf("Nhap diem mon Hoa Hoc: ");scanf("%f",&sv.diem_hoa);
			if(sv.diem_hoa<0 || sv.diem_hoa>10)
			{
			textcolor(4);printf("\n\t\tDiem so khong hop le ! Vui long nhap lai.\n");textcolor(7);
			}
		}while(sv.diem_hoa<0 || sv.diem_hoa>10);
	}
	void xuat1sinhvien(sinhvien sv){
		printf("Ho va ten: %s\n",sv.hoten);
		printf("Nam sinh: %s\n",sv.namsinh);
		printf("Diem Toan Hoc: %0.2f\n",sv.diem_toan);
		printf("Diem Vat Ly: %0.2f\n",sv.diem_ly);
		printf("Diem Hoa Hoc: %0.2f\n",sv.diem_hoa);
	}
	void nhapdanhsach(danhsach &ds){
		for(int i=0;i<ds.n;i++){
			printf("\n\n\t\tNhap thong tin sinh vien thu %d\n",i+1);
			nhap1sinhvien(ds.a[i]);
		}
	}
	void xuatdanhsach(danhsach ds){
		for(int i=0;i<ds.n;i++){
			printf("\n\n\t\tThong tin sinh vien thu %d\n", i+1);
			xuat1sinhvien(ds.a[i]);
		}
	}
	int timkiem(danhsach ds){
		int dem=0;
		for(int i=0;i<ds.n;i++){
			if(ds.a[i].diem_hoa<5 || ds.a[i].diem_ly<5 || ds.a[i].diem_toan<5)
			{
				printf("\n");
				xuat1sinhvien(ds.a[i]);
				dem++;
			}
		}
		return dem;
	}
	int main(){
		danhsach ds;
		int n;
		do{
			printf("Nhap so luong sinh vien: ");scanf("%d",&ds.n);
			if(ds.n<0||ds.n>100)	
			{
			textcolor(4); printf("\t\tGia tri khong hop le vui long nhap lai !\n");textcolor(7);
			}
		}while(ds.n<0||ds.n>100);
		ds.a=(sinhvien*)malloc(n*sizeof(sinhvien));
		printf("\n\n\t\t=============Nhap thong tin sinh vien=============\n\n");
		nhapdanhsach(ds);
		printf("\n\n\t\t=============Xuat thong tin sinh vien=============\n\n");	
		xuatdanhsach(ds);
		printf("\n\n\t\t=============So sinh vien co diem duoi 5===============\n\n");
		timkiem(ds);
	return 0;		
	}
