#include <stdio.h>
#include<math.h>
int main()
{
	int a[100], n;
	do{
		printf("Nhap so luong phan tu trong mang : ");
		scanf("%d",&n);
	}while( n < 0 || n>100);
	for(int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d trong mang",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\n\t\tXuat mang");
	for(int i=0;i<n;i++){
		printf("Gia tri thi %d : %d",i+1,a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]>1 && sqrt(a[i])==(int)sqrt(a[i])){
			printf("%d la so chinh phuong",a[i]);
		}
	}
}
