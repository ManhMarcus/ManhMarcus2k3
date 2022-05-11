#include<iostream>
#include<string>
#define tuoi 4
	using namespace std;
	struct sinhvien{
		string hoten;
		string mssv;
		float dtb;
		string namsinh;
	};
	typedef struct sinhvien Sinhvien;
	struct danhsach{
		Sinhvien a[100];
		int n;
	};
	typedef struct danhsach Danhsach;
	void nhap1sv(Sinhvien &sv){
		while(getchar() !='\n');
		do{
		cout<<"\nNhap ho va ten sinh vien: ";
		getline(cin,sv.hoten);
		if(sv.hoten.length()>30){
			cout<<"Do dai khong hop le !"<<endl;
			system("pause");
		}
		}while(sv.hoten.length()>30);
		do{
		cout<<"Nhap mssv :";
		getline(cin,sv.mssv);
		if(sv.hoten.length()>10){
			cout<<"Do dai khong hop le !"<<endl;
			system("pause");
		}
		}while(sv.mssv.length()>10);
		do{
		cout<<"Nhap nam sinh: ";
		getline(cin,sv.namsinh);
		if(sv.namsinh.length() !=4 ){
			cout<<"Nam sinh khong hop le !"<<endl;
		}
		}while(sv.namsinh.length()<0 || sv.namsinh.length()>4);
		do{
		cout<<"Nhap diem trung binh: ";
		cin>>sv.dtb;
		if(sv.dtb<0.0 && sv.dtb>10.0){
			cout<<"Gia tri khong hop le !"<<endl;
		}
		}while(sv.dtb<=0.0 || sv.dtb>=10 );
	}
	void xuat1sv(Sinhvien &sv){
		cout<<"\n\nHo va ten: "<<sv.hoten;
		cout<<"\nMSSV : "<<sv.mssv;
		cout<<"\nNam sinh: "<<sv.namsinh;
		cout<<"\nDiem trung binh: "<<sv.dtb;
	}
//	void nhapdanhsach(Sinhvien a[],int n){
//		for(int i=0;i<n;i++){
//			cout<<"\n\n\t\tNhap thong tin sinh vien thu "<<i+1<<endl;
//			nhap(a[i]);
//			
//		}
//	}
//	void xuatdanhsach(Sinhvien a[],int n){
//		for(int i=0;i<n;i++){
//			cout<<"\n\n\t\tThong tin sinh vien thu "<<i+1;
//			xuat(a[i]);
//			
//		}
//	}
//	void timkiem(Sinhvien a[],float diemtk,int n){
//		int dem=1;
//		for(int i=0;i<n;i++){
//			if(a[i].dtb==diemtk){
//				cout<<"\n\n\t\tThong tin sinh vien thu "<<dem++;
//				xuat(a[i]);
//			}
//		}
//	}
	void them(Sinhvien a[],int &n,int vitri,Sinhvien x){
		for (int i = n-1; i >= vitri; i--)
			{
				a[i+1] =a[i];
			}
			a[vitri]=x;
			n++;
	}
	void xoa(Sinhvien a[],int &n,int vitri){
		for (int i=vitri+1; i<n;i++)
			{
				a[i-1]=a[i];	
			}
			n--;
	}
	void hoanvi(Sinhvien &x,Sinhvien &z){
		Sinhvien tam;
		tam=x;
		x=z;
		z=tam;
	}
	void sapxep(Sinhvien a[],int n){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i].dtb > a[j].dtb){
					hoanvi(a[i],a[j]);
				}
			}		
		}
	}
	void xoasinhviendiemduoi5(Sinhvien a[],int &n){
		for(int i=0;i<n;i++){
			if(a[i].dtb < 5){
				xoa(a,n,i);
			}
		}
	}
	void nhapdssv(Danhsach &ds){
		for(int i=0;i<ds.n;i++){
			cout<<"\n\n\t\tNhap sinh vien thu "<<i+1;
			nhap1sv(ds.a[i]);
		}
	}
	void xuatdssv(Danhsach &ds){
		for(int i=0;i<ds.n;i++){
			cout<<"\n\n\t\tThong tin sinh vien thu "<<i+1;
			xuat1sv(ds.a[i]);
		}
	}
	float timdiemtb(Danhsach ds){
		float max=ds.a[0].dtb;
		for(int i=1;i<ds.n;i++){
			if(ds.a[i].dtb>max){
				max=ds.a[i].dtb;
			}
		}
		return max;
	}
	void timdiemtbthap(Danhsach ds){
		float min=ds.a[0].dtb;
		for(int i=1;i<ds.n;i++){
			if(ds.a[i].dtb<min){
				min=ds.a[i].dtb;
			}
		}
		for(int i=0;i<ds.n;i++){
			if(ds.a[i].dtb==min){
				xuat1sv(ds.a[i]);
			}
		}
	}
	int main(){
//		Sinhvien a[100];
		Danhsach ds;
		int n;
		cout<<"\t\tNhap so luong trong danh sach sinh vien: ";
		cin>>ds.n;
		cout<<"\n\n\t\tNhap thong tin sinh vien "<<endl;
		nhapdssv(ds);
		cout<<"\n\n\t\tXuat danh sach sinh vien"<<endl;
		xuatdssv(ds);
		float max=timdiemtb(ds);
		cout<<"\n\n\t\tDiem trung binh cao nhat: "<<max;
		cout<<"\n\n\t\tDanh sach sinh vien co diem tb thap nhat: ";
		timdiemtbthap(ds);
//		cout<<"\t\tNhap so luong sinh vien: ";
//		cin>>n;
//		cout<<"\n\n\t\tNhap danh sach sinh vien\n"<<endl;
//		nhapdanhsach(a,n);
//		cout<<"\n==========================================================";
//		cout<<"\n\n\t\tXuat danh sach sinh vien"<<endl;
//		xuatdanhsach(a,n);
//		float diem;
//		cout<<"\n==========================================================";
//		cout<<"\n\n\t\tNhap vao so diem muon tim kiem: ";
//		cin>>diem;
//		cout<<"\n\n\t\tDanh sach sinh vien co diem = "<<diem;
//		timkiem(a,diem,n);
//		int vitrithem,vitrixoa;
//		Sinhvien x;
//		cout<<"\n==========================================================";
//		cout<<"\n\n\t\tNhap vi tri muon them :";
//		cin>>vitrithem;
//		cout<<"\n\n\t\tNhap thong tin sinh vien moi!"<<endl;
//		nhap(x);
//		them(a,n,vitrithem,x);
//		cout<<"\n==========================================================";
//		cout<<"\n\n\t\tDanh sach sinh vien sau khi them!";
//		xuatdanhsach(a,n);
//		cout<<"\n==========================================================";
//		cout<<"\n\n\t\tNhap vi tri muon xoa: ";
//		cin>>vitrixoa;
//		xoa(a,n,vitrixoa);
//		xoasinhviendiemduoi5(a,n);
//		xuatdanhsach(a,n);
//		cout<<"\n\n\t\tDanh sach sinh vien sau khi xoa";
//		xuatdanhsach(a,n);
//		cout<<"\n==========================================================";
//		cout<<"\n\n\tDanh sach theo thu tu tang dan cua diem Trung Binh";
//		sapxep(a,n);
//		xuatdanhsach(a,n);
		return 0;
	}
