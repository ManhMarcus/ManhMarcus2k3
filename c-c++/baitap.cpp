#include <stdio.h>
#include<math.h>
int main()
{
//	int a[100], n;
//	do{
//		printf("Nhap so luong phan tu trong mang : ");
//		scanf("%d",&n);
//	}while( n < 0 || n>100);
//	printf("\n\n\t\tNhap Mang \n");
//	for(int i=0;i<n;i++)
//	{
//		printf("Nhap phan tu thu %d trong mang: ",i+1);
//		scanf("%d",&a[i]);
//	}
//	printf("\n\n\t\tXuat mang\n");
//	for(int i=0;i<n;i++){
//		printf("Gia tri thi %d : %d\n",i+1,a[i]);
//	}
//	printf("\n\n\t\tXuat so chinh phuong\n");
//	for(int i=0;i<n;i++){
//		int can=sqrt(a[i]);
//		if(a[i]>1 && can*can==a[i]){
//			printf("\n%d la so chinh phuong",a[i]);
//		}
//	}
	int *p,m,*z;
	m=2;
	p=&m;
	printf("*p=%d",p-z);
	*p=m+5;
	printf("\nm=%d",m);
	printf("\n\n\t\tNguyen Tien Manh");
}
