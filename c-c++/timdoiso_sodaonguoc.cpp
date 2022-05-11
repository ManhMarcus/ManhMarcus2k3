#include<stdio.h>
#include<math.h>
	int main(){
		int so,dao=0,tam;
		do
		{
			printf("Nhap vao 1 so nguyen bat ki: "); scanf("%d",&so);
			if(so <=0){
				printf("Vui long nhap lai !!!");
			}
		}
		while(so<=0);
		tam=so;
		while( so != 0 )
		{
			dao=(dao * 10 )+ (so % 10);
			so=so/10;
		}
		if(tam == dao){
		
		printf("So %d la doi so !",tam);
		}
		else{
			printf("So %d khong phai la doi so !",tam);
		}
	return 0;
		
}
