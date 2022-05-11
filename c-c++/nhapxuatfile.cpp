#include<iostream>
	using namespace std;
#include<fstream>
#include<math.h>
	struct sinhvien
	{
		int tuso;
		int mauso;
	};
	typedef struct phanso Phanso;
	struct danhsach
	{
		Phanso ds_ps[100];
		int n;
	};
	typedef struct danhsach Danhsach;
	void docphanso(Phanso &ps,ifstream &filein){
		filein>>ps.tuso;
		char x;
		filein>>x;
		filein>>ps.mauso;
	}
	void docfile(Danhsach &ds,ifstream &filein){
		filein>>ds.n;
		for(int i;i<ds.n;i++)
		{
			docphanso(ds.ds_ps[i],filein);
		}
	}
	void xuatdanhsachphanso(Danhsach ds)
	{
		for(int i=0;i<ds.n;i++)
		{
			cout <<ds.ds_ps[i].tuso<<"/"<<ds.ds_ps[i].mauso<<endl;
		}
	}
	int tim_UCLN(int x, int i){
		while(x != i)
		{
			if(x<i)
			{
				i= i - x;
			}
			else if(x>i)
			{
				x=x-i;
			}
		}
		return i;
	}
	void rutgonps(Phanso &ps){
		int ucln=tim_UCLN(ps.tuso,ps.mauso);
		ps.tuso=ps.tuso/ucln;
		ps.mauso=ps.mauso/ucln;
	}
	void rutgondanhsach(Danhsach &ds,ofstream &fileout){
		for(int i=0;i<ds.n;i++){
			rutgonps(ds.ds_ps[i]);
		}
		fileout.open("PHANSORUTGON.TXT",ios_base::out);
		fileout<<ds.n<<endl;
		for(int i=0;i<ds.n;i++){
			fileout<<ds.ds_ps[i].tuso<<"/"<<ds.ds_ps[i].mauso<<endl;
		}
		fileout.close();
	}
	int main(){
		ifstream filein;
		filein.open("INPUT.TXT",ios_base::in);
		Danhsach ds;
		docfile(ds,filein);
		xuatdanhsachphanso(ds);
		ofstream fileout;
		rutgondanhsach(ds,fileout);
		filein.close();
		system("pause");
	}
