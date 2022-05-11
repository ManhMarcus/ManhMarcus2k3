#include<stdio.h>
#include<stdlib.h>
void nhapmang(int a[],int n);
void xuatmang(int a[],int n);
void them(int a[],int &n,int x , int k );
void xoapt(int a[],int &n,int vitri);
bool kiemtrasont(int a[], int n);
bool timsosieunt(int a[],int n);
void sapxep(int a[],int n);
void giamdan(int a[],int n);
bool kiemtrasochan(int x);
void xuatsochan(int a[],int n);
int tinhtongcacso(int a[],int n);
bool cacsochanhangchuc(int x);
int dem_so_lan_xuat_hien(int a[],int n,int x);
int chu_so_chan_dau_tien(int a[],int n);
bool kiemtracosont(int a[],int n);
bool kiem_tra_co_so_nt(int n);
/*Khai bao*/
int main(){
	int arr[100],pt,vitri,x,luachon,a,dem;
/*Menu chuong trinh*/
	while(true){
	system("cls");
	printf("\t\t\t=======BaiTap!=======\n\n\n");
	printf("\t\t1. Nhap va xuat gia tri trong mang.\n\n");
	printf("\t\t2. Tim so nguyen to trong mang.\n\n");
	printf("\t\t3. Tim so sieu nguyen to trong mang.\n\n");
	printf("\t\t4. Xoa phan tu trong mang vua nhap.\n\n");
	printf("\t\t5. Them phan tu vao trong mang vua nhap.\n\n");
	printf("\t\t6. Sap xep mang theo thu tu tang dan.\n\n");
	printf("\t\t7. Sap xep mang theo thu tu giam dan.\n\n");
	printf("\t\t8. Kiem tra va xuat ra so co chu so dau tien chan trong mang.\n\n");
	printf("\t\t9. Tong so co chu so dau tien chan trong mang.\n\n");
	printf("\t\t10. Dem so lan xuat hien trong mang.\n\n");
	printf("\t\t11. Chu so chan dau tien trong mang.\n\n");
	printf("\t\t12. Kiem tra mang co so nguyen to hay khong.\n\n");
	printf("\t\t0. Thoat chuong trinh.\n\n\n");
	printf("\t\t\t=======KetThuc!=======\n\n");
	printf("\t\tNhap lua chon cua ban: ");scanf("%d",&luachon);
	printf("\n");
		if(luachon==0){ 
			break;
		} else
			if(luachon==1){
				do{
					printf("Nhap so phan tu trong mang: ");scanf("%d",&pt);
					if(pt<0 || pt>100){
					printf("Gia tri khong hop le !\n");
					system("pause");
						}
				}while(pt<0 || pt>100);
				printf("Nhap cac phan tu co trong mang: ");
				printf("\n");
				nhapmang(arr,pt);
				printf("Cac phan tu co trong mang: ");
				printf("\n");
				xuatmang(arr,pt);
				printf("\n");
				system("pause");	
			}
		else if(luachon==2){
				printf("Cac so nguyen to trong mang: ");
				kiemtrasont(arr,pt);
				printf("\n");
				system("pause");
		}
		else if(luachon==3){
				printf("Cac so sieu nguyen to trong mang: ");
				timsosieunt(arr,pt);
				printf("\n");
				system("pause");
		}
		else if(luachon==4){
				do{
					printf("Nhap vi tri can xoa : ");scanf("%d",&vitri);
					if(vitri<0 || vitri>100){
						printf("Gia tri khong hop le !\n");
					}
				}while(vitri<0 || vitri >100);
				xoapt(arr,pt,vitri);
				printf("Cac phan tu sau khi xoa: ");
				printf("\n");
				xuatmang(arr,pt);
				printf("\n");
				system("pause");
		}
		else if(luachon==5){
			do{
				printf("Nhap vi tri them gia tri: ");scanf("%d",&vitri);
				if(vitri<0 || vitri>100){
					printf("Gia tri khong hop le !\n");
				}
			}while(vitri<0 || vitri >100);
			printf("Nhap gia tri can them vao mang: ");scanf("%d",&x);
			them(arr,pt,x,vitri);
			printf("Cac phan tu trong mang sau khi them: ");
			printf("\n");
			xuatmang(arr,pt);
			printf("\n");
			system("pause");
		}
		else if(luachon==6){
			printf("Thu tu tang dan cua mang :");
			printf("\n");
			sapxep(arr,pt);
			xuatmang(arr,pt);
			printf("\n");
			system("pause");
		}
		else if(luachon==7){
			printf("Thu tu giam dan cua mang: ");
			printf("\n");
			giamdan(arr,pt);
			xuatmang(arr,pt);
			printf("\n");
			system("pause");
		}
		else if(luachon==8){
			printf("So co chu so chan dau tien trong mang la:");
			printf("\n");
			xuatsochan(arr,pt);
			printf("\n");
			system("pause");
		}
		else if(luachon==9){
			printf("Tong cac so co chu so chan dau tien trong mang la: ");
			printf("\n");
			tinhtongcacso(arr,pt);
			printf("\n");
			system("pause");
		}
		else if(luachon==10){
			printf("Nhap phan tu muon dem: "); scanf("%d",&dem);
			printf("So lan xuat hien cua phan tu trong mang la: ");
			dem_so_lan_xuat_hien(arr,pt,dem);
			printf("\n");
			system("pause");	
		}
		else if(luachon==11){
			printf("Chu so chan dau tien trong mang: ");
			chu_so_chan_dau_tien(arr,pt);
			printf("\n");
			system("pause");
		}
		else if(luachon==12){
			if(kiemtracosont(arr,pt)==true){
				printf("Mang co so nguyen to !\n");
			}else {
				printf("Mang khong co so nguyen to !\n");
			}
			system("pause");
		}
	}
}
/*Nhap mang*/
	void nhapmang(int a[],int n)
		{
			for (int i,j=1; i<n && j<=n;j++ && i++){
				printf("Phan tu thu %d: ",j);scanf("%d",&a[i]);
			}
		}
/*Xuat mang*/
	void xuatmang(int a[],int n)
		{
			for (int i=0; i<n; i++)
			{
				printf("%d\t",a[i]);
			}
		}
/*Them gia tri vao mang*/
	void them(int a[],int &n, int x,int k)
		{
			for (int i = n-1; i >= k; i--)
			{
				a[i+1] =a[i];
			}
			a[k]=x;
			n++;
		}
/*Xoa phan tu trong mang*/
	void xoapt(int a[],int &n,int vitri)
		{
			for (int i=vitri+1; i<n;i++)
			{
				a[i-1]=a[i];	
			}
			n--;
		}
/*Kiem tra so nguyen to*/
	bool kiemtrasont(int a[],int n){
		for (int i; i<n; i++){
			bool kt = true;
			if (a[i]<2){
				kt = false;
			}else {
				for(int j=2;j<a[i];j++){
					if(a[i]%j==0){
						kt= false;
						break;
					}
				}
			}
				if(kt==true){
					printf("\t%d\t",a[i]);
				}
		}
	}
/*Kiem tra so sieu nguyen to*/
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
				printf("\t%d\t",arr[i]);
			}
		}
		}
/*Sap xep mang tang dan*/
	void sapxep(int a[],int n)
	{
		for (int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					int tam=a[i];
					a[i]=a[j];
					a[j]=tam;
				}
			}
		}
	}
/*Sap xep mang giam dan*/
	void giamdan(int a[],int n)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					int tam=a[i];
					a[i]=a[j];
					a[j]=tam;
				}
			}
		}
	}
/*Kiem tra so so chan dau tien*/
	bool kiemtrasochan(int x)
	{
		while (x>=10){
			x /=10;
		}
		if (x%2==0){
			return true ;
		}else{
			return false;
		}
	}
/*Xuat ra so chan*/
	void xuatsochan(int a[],int n)
	{
		for (int i;i<n;i++){
			if (kiemtrasochan(a[i])==true){
				printf("%d\t",a[i]);
			}
		}
	}
/*Kiem tra so so chan hang chuc*/
	bool cac_so_chan_hang_chuc(int x){
		x=x/10;
		if(x%2==0){
			return true;
		}else if (x<10)
 			{
  			return false;
 			}
   			 else 
   			{
     		return false;
			 }
	}
/*Tinh tong cac so co chu so chan hang chuc*/
	int tinhtongcacso(int a[],int n){
		int tam=0;
		for (int i=0;i<n;i++){
			if(cac_so_chan_hang_chuc(a[i])==true){
				tam=tam+a[i];
			}
		}
		printf("%d",tam);
	}
//dem so lan xuat hien trong mang
	int dem_so_lan_xuat_hien(int a[],int n,int x){
		int dem=0;
		for(int i=0; i<n;i++){
			if(x==a[i]){
				dem++;
			}
		}
		printf("%d",dem);
	}
//Ham co chu so chan dau tien trong mang
	int chu_so_chan_dau_tien(int a[],int n){
		int dem=0;
		for(int i=0; i<n; i++){
			if(a[i]%2==0){
				dem=a[i];
				break;
			}
		}
		printf("%d",dem);
	}
//Kiem tra co so nguyen to khong
	bool kiem_tra_co_so_nt(int n){
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
		if(n%2==0)
			{
				return false;
			}
		else{
			for (int i=2; i<n;i++)
				{
				if (n%i==0)
					{
						return false;
					}
				}
			}
		}
		return true;
	}
//Tra ve gia tri co so nguyen to khong
	bool kiemtracosont(int a[],int n){
		bool kiemtra=false;
		for(int i=0; i<n;i++){
			if(kiem_tra_co_so_nt(a[i]) == true){
				kiemtra = true;
				break;
			}
		}
		return kiemtra;
	}
	
