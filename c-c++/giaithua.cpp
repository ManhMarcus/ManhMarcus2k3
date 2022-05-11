#include<stdio.h>
#include<math.h>
	int main(){
	int i,j;  
	i=9;
	j=9;
 	for(i=1;i<=9;i++){ 
  		for(j=9-i;j>=1;--j)printf("*"); 
  			printf("\n"); 
	} 
	return 0;
	}
