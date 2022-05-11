#include<stdio.h>
#include<stdlib.h>
	void xuatmang(int *a,int n);
	void capphatlai(int *&a, int vungnhocu, int vungnhomoi);
	int main(){
		int *a;
		int pt;
		while(true){
			system("cls");
			printf("\n\n\t\t============== -Menu- =============\n\n\n");
			printf("\n\t\t1.Nhap phan tu trong mang !\n\n");
			printf("\t\t2.Xuat mang !\n\n");
			printf("\n\n\t\t============== -End- =============\n\n\n");
			int luachon;
			printf("Nhap vao lua chon cua ban: ");scanf("%d",&luachon);
			switch(luachon){
				case 0:
				{
					return 0;
				}break;
				case 1:
				{
					int x;
					printf("Nhap phan tu: "); scanf("%d",&x);
					if(pt==0){
						a=new int;
					}else {
						capphatlai(a,pt+1,pt);
					}
					a[pt]=x;
					pt++;
				}break;
				case 2:
				{
					printf("\n\n\t\t============Xuat Mang============\n\n");
					xuatmang(a,pt);
					printf("\n");
					system("pause");
				}break;
			}
		}
	}
	void nhap(int *a, int n){
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
	}
	void xuatmang(int *a,int n){
		for(int i=0; i<n; i++){
			printf("\t%d",a[i]);
		}
	}
	void capphatlai(int *&a, int vungnhocu, int vungnhomoi){
		int *temp=new int[vungnhocu];
		for(int i=0;i<vungnhocu;i++){
			temp[i]=a[i];
		}
		delete[] a;
		a= new int[vungnhomoi];
		for(int i=0; i<vungnhocu;i++){
			a[i]=temp[i];
		}
		delete[] temp;
	}
