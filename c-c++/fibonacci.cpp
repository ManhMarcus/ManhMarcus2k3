#include<stdio.h>
#include<math.h>
	int main(){
	int i1,n1,n2=0;
	long last=1,next=0,sum1;
	printf("Nhap 1 so bat ky: ");scanf("%d",&n1);
		while(next <= n1/2){
		printf(" %d",last);
		sum1=next+last;
		next=last;
		last=sum1;
	}
	printf("\n");
	int a=0,b=1,x,a1,i,sum;
		printf("Nhap so phan tu finabocci: ");scanf("%d",&sum);
		for(i=1;i<sum;i++){
			x=a+b;
			printf(" %d",x);
			a=b;
			b=x;
		}	
	return 0;	
	}
