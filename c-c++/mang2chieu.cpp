#include<stdio.h>
#include<stdlib.h>
const int maxcot=100;
const int maxdong=100;
void nhap(int a[][maxcot],int dong,int cot);
void xuat(int a[][maxcot],int dong ,int cot);
int tongsont(int a[][maxcot],int dong, int cot);
int tongdong(int a[][maxcot],int dong, int cot);
int tongcot(int a[][maxcot],int dong, int cot);
void duongcheochinh(int a[][maxcot], int dong,int cot);
void duongcheophu(int a[][maxcot], int dong,int cot);
	int main(){
		int a[maxdong][maxcot];
		int pt1,pt2,luachon;
		while(true){
			system("cls");
			printf("\n\n\t\t=========Bai Tap Mang 2 Chieu===========\n\n");
			printf("\t\t1.Tinh tong so nguyen to trong mang \n\n");
			printf("\t\t2.Tinh tong tung cot trong mang \n\n");
			printf("\t\t3.Tinh tong tung dong trong mang \n\n");
			printf("\t\t4.Duong cheo chinh cua mang \n\n");
			printf("\t\t5.Duong cheo phu cua mang \n\n");
			printf("\t\t0.Ket thuc !");
			printf("\n\n\t\t==========================================");
			printf("\n\nNhap lua chon cua ban: ");scanf("%d",&luachon);
			if (luachon!=0 && luachon!=1 && luachon!=2 && luachon!=3 && luachon!=4 && luachon!=5)
			{
				printf("Lua chon khong hop le vui long nhap lai !]n\n");
				system("pause");
			}
			else 
			{
				if (luachon==0)
				{
					break;
				}
				if(luachon == 1)
				{
					do{
						printf("Nhap vao so dong: "); scanf("%d",&pt1);
						if(pt1<0 || pt1 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt1<0 || pt1>100);
					do{
						printf("Nhap vao so cot: "); scanf("%d",&pt2);
						if(pt2<0 || pt2 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt2<0 || pt2>100);
					printf("\n\t\t=======Nhap Mang=======\n\n");
					nhap(a,pt1,pt2);
					printf("\t\t=======Xuat Mang=======\n\n");
					xuat(a,pt1,pt2);
					printf("\t\t========Tong So Nguyen To========\n\n");
					printf("Tong so nguyen to trong mang la: ");
					tongsont(a,pt1,pt2);
					printf("\n");
					system("pause");
				}
				if(luachon==2)
				{
						do{
						printf("Nhap vao so dong: "); scanf("%d",&pt1);
						if(pt1<0 || pt1 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt1<0 || pt1>100);
					do{
						printf("Nhap vao so cot: "); scanf("%d",&pt2);
						if(pt2<0 || pt2 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt2<0 || pt2>100);
					printf("\n\t\t=======Nhap Mang=======\n\n");
					nhap(a,pt1,pt2);
					printf("\t\t=======Xuat Mang=======\n\n");
					xuat(a,pt1,pt2);
					printf("\n\n\t\t=======Tong Cot========\n\n");
					tongcot(a,pt1,pt2);
					printf("\n");
					system("pause");
				}
				if(luachon==3)
				{
					do{
						printf("Nhap vao so dong: "); scanf("%d",&pt1);
						if(pt1<0 || pt1 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt1<0 || pt1>100);
					do{
						printf("Nhap vao so cot: "); scanf("%d",&pt2);
						if(pt2<0 || pt2 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt2<0 || pt2>100);
					printf("\n\t\t=======Nhap Mang=======\n\n");
					nhap(a,pt1,pt2);
					printf("\t\t=======Xuat Mang=======\n\n");
					xuat(a,pt1,pt2);
					printf("\n\n\t\t=======Tong Dong=======\n\n");
					tongdong(a,pt1,pt2);
					printf("\n");
					system("pause");
				}
				if(luachon==4)
				{
					do{
						printf("Nhap vao so dong: "); scanf("%d",&pt1);
						if(pt1<0 || pt1 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt1<0 || pt1>100);
					do{
						printf("Nhap vao so cot: "); scanf("%d",&pt2);
						if(pt2<0 || pt2 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt2<0 || pt2>100);
					printf("\n\t\t=======Nhap Mang=======\n\n");
					nhap(a,pt1,pt2);
					printf("\t\t=======Xuat Mang=======\n\n");
					xuat(a,pt1,pt2);
					printf("\t=======Duong Cheo Chinh=======\n\n");
					duongcheochinh(a,pt1,pt2);
					printf("\n");
					system("pause");
				}
				if(luachon==5)
				{
					do{
						printf("Nhap vao so dong: "); scanf("%d",&pt1);
						if(pt1<0 || pt1 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt1<0 || pt1>100);
					do{
						printf("Nhap vao so cot: "); scanf("%d",&pt2);
						if(pt2<0 || pt2 >100){
							printf("Gia tri khong hop le !");
							system("pause");
						}
					}while(pt2<0 || pt2>100);
					printf("\n\t\t=======Nhap Mang=======\n\n");
					nhap(a,pt1,pt2);
					printf("\t\t=======Xuat Mang=======\n\n");
					xuat(a,pt1,pt2);
					printf("\t=======Duong Cheo Phu=======\n\n");
					duongcheophu(a,pt1,pt2);
					printf("\n");
					system("pause");
				}
			}
		}
		return 0;
}
	void nhap(int a[][maxcot],int dong,int cot){
		for(int i=0,h=1;i<dong;i++){
			for (int j=0,k=1;j<cot;j++){
				printf("Nhap phan tu a[%d][%d]: ",i+1,j+1);scanf("%d",&a[i][j]);
				printf("\n");
			}
		}
	}
	void xuat(int a[][maxcot],int dong ,int cot){
		for(int i=0;i<dong;i++){
			for (int j=0; j<cot;j++){
				printf("%d\t",a[i][j]);
			}
			printf("\n\n");
		}		
	}
	bool kiemtrasont(int n){
		if(n<2)
		{
			return false;
		}
		else
		{
			if(n==2)
				{
					return true;
				}
			else
			{
			if(n%2==0)
				{
					return false;
				}
			else
				{
				for (int i=2; i<n;i++)
					{
					if(n % i==0)
						{
							return false;
						}
					}
				}
			}
		}
		return true;
	}
	int tongsont(int a[][maxcot],int dong, int cot){
		int tong=0;
		for(int i = 0 ; i < dong; i++)
		{
			for (int j=0 ; j<cot ; j++)
			{
				if(kiemtrasont(a[i][j]) == true)
				{
					tong=tong + a[i][j];
				}
			}
		}
		printf("%d",tong);		
	}
	int tongcot(int a[][maxcot],int dong, int cot){
		
		for(int j = 0 ; j < cot; j++)
		{
			int tong=0;
			for (int i=0 ; i<dong ; i++)
			{
				tong= tong +a[i][j];
			}
			printf("Tong cot thu %d: %d\n",j+1,tong);
			printf("\n");
		}
		
	}
	int tongdong(int a[][maxcot],int dong, int cot){
		
		for(int i = 0 ; i < dong; i++)
		{
			int tong=0;
			for (int j=0 ; j<cot ; j++)
			{
				tong= tong +a[i][j];
			}
			printf("Tong dong thu %d: %d\n",i+1,tong);
			printf("\n");
		}
	}
	void duongcheochinh(int a[][maxcot], int dong,int cot){
		for(int i=0;i<dong;i++){
			printf("\t%d\t\n",a[i][i]);
		}
	}
	void duongcheophu(int a[][maxcot], int dong,int cot){
		for(int i=0;i<cot;i++){
				printf("\t%d\n",a[i][cot-i-1]);
		}
	}
