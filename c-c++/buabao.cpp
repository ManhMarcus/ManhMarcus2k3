#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;
int main()
    {
	int n;
	int a = 1, b =3;
	cout << "Moi ban chon :";
	cout << "\n1.Keo";	//1 vs 3 th� tr? v? 1
	cout << "\n2.Bua";	//2 vs 1 th� tr? v? 2
	cout << "\n3.Bao";	// 3 vs2 th� tr? v? 3
    nhap: do{
		cout << "\n Nguoi choi chon :";
		cin >> n;
		if (n < 0 || n>3)
			cout << "\nBan nhap sai. Moi ban kiem tra lai";
	} while (n < 0 || n>3);
	srand(time(0));
	int x = a + rand() % (b - a + 1);
	if (x == n)
	{
		cout << "Ban da hoa voi may";
		goto nhap;
	}
	if (x == 1 && n == 3 || (x == 2 && n == 1) || (x == 3 && n == 2))
		{
			cout << x;
			cout << "\nBan da Thua";
		}

		
	else 
	{
		cout << x;
		cout << "May da thang";
	}
	
	return 0;
}
