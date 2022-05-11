#include<stdio.h>
#include<stdlib.h>
	void nhapmang(int arr[],int n);
	void xuatmang(int arr[],int n);
	bool timsont(int arr[],int n);
	bool timsosieunt(int arr[],int n);
/* Chuong trinh chinh*/
	int main(){
		int arr[100],pt,n;
		do{
			system("cls");
			printf("Nhap so phan tu trong mang: ");scanf("%d",&pt);
			if(pt<0 || pt>100 ){
				printf("Gia tri khong hop le !\n");
				system("pause");
			}
		}while(pt<0 || pt>100 );
		printf("Nhap cac phan tu trong mang: \n");
			nhapmang(arr,pt);
		printf("Cac phan tu trong mang la: \n");
			xuatmang(arr,pt);
		printf("\n");
		printf("Cac so nguyen to trong mang: ");
		printf("\n");
			timsont(arr,pt);
		printf("\n");
		printf("Cac so sieu nguyen to trong mang:"); 
		printf("\n");
			timsosieunt(arr,pt);
	}
/*Nhap mang*/
	void nhapmang(int arr[],int n){
		for(int i=0,j=1;i<n && j<=n;j++ && i++){
			printf("Nhap phan tu thu %d :",j);scanf("%d",&arr[i]);
		}
	}
/*Xuat mang*/
	void xuatmang(int arr[],int n){
		for (int i=0;i<n;i++){
			printf("\t\t\t%d\n",arr[i]);
		}
	}
/*Tim so nguyen to*/
	bool timsont(int arr[],int n){
		for(int i; i<n; i++){
			bool kt=true;
			if(arr[i]<2){
				kt = false;
			}else {
				for(int j=2;j<arr[i];j++){
					if(arr[i] % j == 0){
						kt= false;
						break;
					}
				}
				}
				if(kt==true){
				printf("%d\t",arr[i]);
			}
			}
		}
/*Tim so sieu nguyen to*/
	bool timsosieunt(int arr[],int n){
		for(int i; i<n; i++){
			bool kt=true;
			int tam=arr[i];
			while(tam !=0){
			if(tam<2){
				kt = false;
			}else {
				for(int j=2;j<tam;j++){
					if(tam % j == 0){
						kt= false;
						break;
					}
				}
				}
				if(kt==true){
					tam= tam/10;
			}else{
				break;
			}
			}
			if(kt==true){
				printf("%d\t",arr[i]);
			}
		}
		system("pause");
		return 0;
		}		
