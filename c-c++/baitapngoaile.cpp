#include<stdio.h>
#include<math.h>
	int timsodao(int n){
		int dao=0;
			while (n != 0){
				dao = dao*10 + n % 10;
				n=n/10;
			}
			return dao;
	}
	int main(){
		int a,b,c;
		do {
			printf("1.Nhap so bat ki: "); scanf("%d",&a);
			if(a <= 0){
				printf("Gia tri ko hop le !");
			}
		}while( a <= 0 );
		do {
			printf("2.Nhap so bat ki: "); scanf("%d",&b);
			if( b <= 0){
				printf("Gia tri ko hop le !");
			}
		}while( b <= 0 );
		do {
			printf("3.Nhap so bat ki: "); scanf("%d",&c);
			if(c <= 0){
				printf("Gia tri ko hop le !");
			}
		}while(c <= 0);
		int daoa = timsodao(a),daob=timsodao(b),daoc=timsodao(c);
		printf("So dao cua %d la %d\n",a,daoa);
		printf("So dao cua %d la %d\n",b,daob);
		printf("So dao cua %d la %d\n",c,daoc);
		
	return 0;
		
}
