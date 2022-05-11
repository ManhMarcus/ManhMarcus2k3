#include<iostream>
#include"DoHoa.h"
	using namespace std;
struct phanso{
	int tuso;
	int mauso;
};
typedef struct phanso Phanso;
void nhapphanso(Phanso &ps){
	cout<<"Nhap tu so: ";
	cin>>ps.tuso;
	cout<<"Nhap mau so: ";
	cin>>ps.mauso;
}
void xuatphanso(Phanso ps){
	cout<<ps.tuso<<" / "<<ps.mauso<<endl;
}
struct danhsach{
	Phanso *arr;
	int n;
};
typedef struct danhsach Danhsach;
void nhapdanhsach(Danhsach &ds){
	for (int i=0; i<ds.n;i++){
		cout<<"Nhap phan so thu "<<i+1<<endl;
		nhapphanso(ds.arr[i]);
	}
}
void xuatdanhsach(Danhsach ds){
	for (int i=0;i<ds.n;i++){
		cout<<"Phan so thu "<<i+1<<endl;
		xuatphanso(ds.arr[i]);
	}
}
int UCLN(int x, int z){
	if(x<0){
		x*=-1;
	}
	if(z<0){
		z*=-1;
	}
	while(x!=z){
		if(x>z){
			x=x-z;
		}else{
			z=z-x;
		}
	}
	return x;
}
void rutgon(Phanso &ps){
	int ucln=UCLN(ps.tuso,ps.mauso);
	ps.tuso=ps.tuso/ucln;
	ps.mauso=ps.mauso/ucln;
}
void rutgondanhsach(Danhsach &ds){
	for(int i=0;i<ds.n;i++){
		rutgon(ds.arr[i]);
	}
}
int main(){
	textcolor(1);
	Danhsach ds;
	cout<<"Nhap so luong phan so: ";
	cin>>ds.n;
	ds.arr = new Phanso[ds.n];
	cout<<"Nhap danh sach phan so "<<endl;
	nhapdanhsach(ds);
	cout<<"Xuat danh sach phan so \n\n"<<endl;
	xuatdanhsach(ds);
	cout<<"\n\n\t\tDanh sach phan so rut gon "<<endl;
	rutgondanhsach(ds);
	xuatdanhsach(ds);
	
}
