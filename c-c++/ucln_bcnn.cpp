#include<stdio.h>
#include<math.h>
	template <class p1,class p2>
		p1 ucln(p1 a, p2 b){
		if (a < b){
			for (int i=a; i>=1;i--){
				if(a%i==0 && b%i==0){
					return i;
				}
			}
		}
		else{
			for (int i=b; i>=1; i--){
				if(b%i==0 && a%i==0){
					return i;
				}
			}
		}
	}
	p2 bcnn(p1 a, p2 b){
		return (a*b)/ucln(a,b);
	}
	int main(){
		int c,d;
		printf("Nhap vao so thu nhat: ");scanf("%d",&c);
		printf("Nhap vao so thu hai: ");scanf("%d",&d);
		printf("UCLN cua %d va %d la: %d\n",c,d,ucln(c,d));
		printf("BCNN cua %d va %d la: %d\n",c,d,bcnn(c,d));
		return 0;
	}
