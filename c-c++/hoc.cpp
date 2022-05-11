#include"DoHoa.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
bool kiemtrasont(int n)
{
			if (n<2){
				return false;
			}
			else {
				for(int j=2;j<=sqrt(n);j++){
					if(n % j==0){
						return false;
					}
				}
			}
		return true;
		}
//	printf("\tNguyen Tien Manh");
main()
{	
	int n=7;
	if(kiemtrasont(n)==true){
		printf("a");
	}else printf("b");
		
		
		
		
		
	printf("\n\n\n============================================================================================================");
		
		
		
		
		
		
		
		
		
		
		
		textcolor(3);
		printf("\n\n\n\t\t**********************************\n");
		printf("\t\t*                                *\n");
		printf("                *");
		textcolor(12);
		printf("\tNguyen Tien Manh         ");
		textcolor(3);
		printf("*\n");
		printf("\t\t*                                *\n");
		printf("\t\t**********************************");
		textcolor(7);
	}
