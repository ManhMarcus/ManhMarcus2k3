#include <stdio.h>
#include<math.h>
int timsodao(int n){
	int dao=0;
	while(n != 0){
		dao=(dao*10)+(n%10);
		n=n/10;
	}
	return dao;
}
int main ()
{
	int a,b,dao1,dao2;
	do{
		printf("1.Nhap vao 1 so bat ki: ");scanf("%d",&a);
		if(a<=0){
			printf("Vui long nhap lai !");
		}
	}while (a<=0);
	do{
		printf("2.Nhap vao 1 so bat ki: ");scanf("%d",&b);
		if(b<=0){
			printf("Vui long nhap lai !");
		}
	}while (b<=0);
	dao1=timsodao(a);dao2=timsodao(b);
	printf("Dao cua so %d la: %d\n",a,dao1);
	printf("Dao cua so %d la: %d\n",b,dao2);
   return 0;
}

