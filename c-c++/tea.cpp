#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float n;
			printf("Nhap so gia tri muon dao: "); scanf("%f",n);
			printf("%f",n);
			if(n > 0){
				int dao=0;
				int t;
				while (n!=0){
					printf("Nhap so can dao: "); scanf("%d",t);
					printf("%d ---->",t);
					while(t)
					{
						dao=dao*10 + t % 10;
						t/=10;
					}
				printf("%d",dao);
				}	
					
				}
			else {
				printf("Vui long nhap lai gia tri !");
			}
return 0 ;
}
