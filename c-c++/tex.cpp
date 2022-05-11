#include<iostream>
using namespace std;
#include<fstream>

// khai b�o c?u tr�c ph�n s?
struct PHANSO
{
	int tuso;
	int mauso;
};

// khai b�o c?u tr�c danh s�ch ph�n s?
struct DANHSACH
{
	PHANSO ds_ps[100];
	int n;
};


// h�m d?c 1 ph�n s?
void Doc_1_Phan_So(PHANSO &ps, ifstream &filein)
{
	filein >> ps.tuso;
	char x;
	filein >> x;
	filein >> ps.mauso;
}

// h�m d?c file
void Doc_File(DANHSACH &ds, ifstream &filein)
{
	filein >> ds.n;
	for (int i = 0; i < ds.n; i++)
	{
		Doc_1_Phan_So(ds.ds_ps[i], filein);
	}
}

// h�m xu?t danh s�ch ph�n s?
void Xuat_Danh_Sach_Phan_So(DANHSACH ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << ds.ds_ps[i].tuso << "/" << ds.ds_ps[i].mauso << endl;
	}
}

// h�m t�m UCLN
int Tim_UCLN(int x, int y)
{
	while (x != y)
	{
		if (x < y)
		{
			y = y - x;
		}
		else if (x > y)
		{
			x = x - y;
		}
	}
	return y;
}

// h�m r�t g?n 1 ph�n s?
void Rut_Gon_1_Phan_So(PHANSO &ps)
{
	int ucln = Tim_UCLN(ps.tuso, ps.mauso);
	ps.tuso = ps.tuso / ucln;
	ps.mauso = ps.mauso / ucln;
}

// h�m r�t g?n danh s�ch ph�n s? v� ghi v�o file RUTGONPHANSO.TXT
void Ghi_File_Rut_Gon_Danh_Sach_Phan_So(DANHSACH &ds, ofstream &fileout)
{
	for (int i = 0; i < ds.n; i++)
	{
		Rut_Gon_1_Phan_So(ds.ds_ps[i]);
	}

	fileout.open("RUTGONPHANSO.TXT", ios_base::out);
	fileout << ds.n << endl;
	for (int i = 0; i < ds.n; i++)
	{
		fileout << ds.ds_ps[i].tuso << "/" << ds.ds_ps[i].mauso << endl;
	}
	fileout.close();
}

// t�m ph�n s? l?n nh?t v� ghi v�o file OUTPUT.TXT
void Ghi_File_Max(DANHSACH ds, ofstream &fileout)
{
	fileout.open("OUTPUT.TXT", ios_base::out);
	float max = ds.ds_ps[0].tuso / (ds.ds_ps[0].mauso * 1.0);
	int k = 0; // luu l?i ch? s? c?a ph�n s? l?n nh?t
	for (int i = 1; i < ds.n; i++)
	{
		float tam = ds.ds_ps[i].tuso / (ds.ds_ps[i].mauso * 1.0);
		if (max < tam )
		{
			max = tam;
			k = i;
		}
	}
	fileout << ds.ds_ps[k].tuso << "/" << ds.ds_ps[k].mauso;
	fileout.close();
}
int main()
{
	ifstream filein;
	filein.open("INPUT.TXT", ios_base::in);
	DANHSACH ds;
	
	Doc_File(ds, filein);
	Xuat_Danh_Sach_Phan_So(ds);
	ofstream fileout;
	Ghi_File_Rut_Gon_Danh_Sach_Phan_So(ds, fileout);

	Ghi_File_Max(ds, fileout);
	filein.close();
	system("pause");
	return 0;
}
