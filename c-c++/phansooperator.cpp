#include<iostream>
	using namespace std;
#include<fstream>
struct phanso{
		int tuso;
		int mauso;
};
typedef struct phanso Phanso;
void nhapphanso(Phanso &ps){
	cout<<"\nNhap tu so: ";
	cin>>ps.tuso;
	do{
	cout<<"Nhap mau so: ";
	cin>>ps.mauso;
	if(ps.mauso==0){
		cout<<"\nGia tri khong hop le\n";
	}
	}while(ps.mauso==0);
}
void xuatphanso(Phanso ps){
	cout<<"\nPhan so cua ban la: "<<ps.tuso<<" / "<<ps.mauso;
}
istream& operator >>(istream& in, Phanso &ps){
	cout<<"\nNhap tu so: ";
	in>>ps.tuso;
	do{
	cout<<"Nhap mau so: ";
	in>>ps.mauso;
	if(ps.mauso==0){
		cout<<"\nGia tri khong hop le\n";
	}
	}while(ps.mauso==0);
	return in;
}
ostream& operator <<(ostream& out, Phanso &ps){
	cout<<ps.tuso<<" / "<<ps.mauso;
}
Phanso operator +(Phanso x, Phanso z){
	Phanso tam;
	tam.tuso=(x.tuso*z.mauso)+(z.tuso*x.mauso);
	tam.mauso=x.mauso*z.mauso;
	return tam;
}
int main(){
	Phanso x;
	Phanso z;
	cout<<"Nhap phan so 1: ";
	cin>>x;
	cout<<"Nhap phan so 2: ";
	cin>>z;
	cout<<"\nXuat phan so: ";
	cout<<"\n\tPhan so 1: "<<x<<endl;
	cout<<"\tPhan so 2: "<<z<<endl;
	Phanso tam;
	tam=x+z;
	cout<<"Tong 2 phan so = ";
}
