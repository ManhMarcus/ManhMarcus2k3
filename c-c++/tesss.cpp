#include<stdio.h>
#include<math.h>
	bool kiem_tra_so_nt(int n){
		if(n<2){
			return false;
		}
		else{
			if(n==2){
				return false;
		} else {
			if(n % 2 ==0){
				return false;
			}else {
				for (int i=2; i<n; i++){
					if(n%i==0){
						return false;
					}
				}
			}
		}
		}
	return true;
	}
int main(){
	int a;
	printf("Nhap 1 so bat ki : "); scanf("%d",&a);
	bool sont=kiem_tra_so_nt(a);
	if (sont==true){
		printf("%d la so nt !\n",a);
	}else{
		printf("%d ko phai la so nt !\n",a);
	}
	printf("cac so nt truoc %d :\n",a);
	for (int i =2; i<=a;i++){
		for (int j=2;j*j<=i;j++){
			if( i%j ==0){
				break;
			}else{
				if( j+1 > sqrt(i)){
					printf("%d\t",i);
				}
			}
		}
	}
}
