#include<stdio.h>
#include<stdlib.h>
	void nhap(int a[],int n);
	void xuat(int a[],int n);
	void xoa(int *&a, int &n , int vitri);
	void them(int *&a, int &n,int vitri,int giatri);
	void capphatlai(int *&a, int vungnhocu, int vungnhomoi);
	int main(){
		int *a;
		int pt;
		do{
			printf("Nhap so luong phan tu trong mang A: ");scanf("%d",&pt);
			if(pt<0){
				system("cls");
				printf("Gia tri khong hop le !\n");
			}
		}while(pt<0);
		a= new int[pt];
		printf("\n\n\t=================Nhap mang A===================\n\n");
		nhap(a,pt);
		printf("\n\n\t=================Xuat mang A===================\n\n");
		xuat(a,pt);
		printf("\n");
		int *b;
		int pt2;
		do{
			printf("Nhap so luong phan tu trong mang B: ");scanf("%d",&pt2);
			if(pt2<0){
				system("cls");
				printf("Gia tri khong hop le !\n");
			}
		}while(pt2<0);
		b= new int[pt2];
		
		printf("\n\n\t=================Nhap mang B===================\n\n");
		nhap(b,pt2);
		printf("\n\n\t=================Xuat mang B===================\n\n");
		xuat(b,pt2);
		printf("\n");
		int *c=0;
		int k=0;
		c= new int [pt+pt2];
		for(int i=0; i<pt;i++){
			c[k]=a[i];
			k++;
		}
		for(int i=0; i<pt2;i++){
			c[k]=b[i];
			k++;
		}
		printf("\n\n\t=================Xuat mang C===================\n\n");
		xuat(c,k);
		printf("\n");
		int vt;
		printf("\n");
		printf("Nhap vi tri can xoa:");scanf("%d",&vt);
		printf("\n");
		xoa(a,pt,vt);
		printf("\n");
		printf("Mang sau khi xoa :");
		printf("\n");
		xuat(a,pt);
		printf("\n");
		printf("a[5]=%d",a[4]);
		printf("\n");
		int vitri,giatri;
		printf("Nhap gia tri can them : "); scanf("%d",&giatri);
		printf("Nhap vi tri can them : "); scanf("%d",&vitri);
		them(a,pt,vitri,giatri);
		printf("Mang sau khi them : ");
		xuat(a,pt);
		printf("\na[5]= %d",a[5]);
		delete[] a;
	}
		void nhap(int a[],int n){
		for(int i=0,j=1;j<=n && i<n;j++ && i++){
			printf("Nhap gia tri thu %d: ",j);scanf("%d",&a[i]);
		}
	}
	void xuat(int a[],int n){
		for(int i=0; i<n;i++){
			printf("\t%d",a[i]);
		}
	}
	void xoa(int *&a, int &n , int vitri){
		for(int i= vitri+1 ; i<n;i++){
			a[i-1]=a[i];
		}
		n--;
		capphatlai(a,n,n);
	}
	void them(int *&a, int &n,int vitri,int giatri){
		capphatlai(a,n+1,n);
		for (int i = n-1; i >= vitri; i--)
			{
				a[i+1] =a[i];
			}
			a[vitri]=giatri;
			n++;
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
