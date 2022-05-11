#include"danhsachsv.h"
	void nhapdanhsach(Danhsach &ds){
		for(int i=0;i<ds.n;i++){
			cout<<"\n\n\t\tNhap thong tin sinh vien thu "<<i+1<<endl;
			nhapthongtin(ds.a[i]);
		}
	}
	void xuatdanhsach(Danhsach ds){
		for(int i=0;i<ds.n;i++){
			cout<<"\n\n\t\tThong tin sinh vien thu "<<i+1;
			xuatthongtin(ds.a[i]);
		}
	} 
