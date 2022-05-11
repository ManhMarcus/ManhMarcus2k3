#include<stdio.h>
#include<string.h>
#include<math.h>
#include"thuviencuatoi.h"

	int main(){
		int demkitu=0,demtu=1;
		int a[10],n;
		printf("Nhap so phan tu n: "); scanf("%d",&n);
		for(int i=0;i<n;i++){
			printf("Nhap phan tu %d: ",i); scanf("%d",&a[i]);
		}
		printf("\nCac so ngto co trong mang: ");
		bool kiemtrasont(a,n);
		// char ch='a';
		// printf("Nhap 1 cau bat ki: "); 
		// while(ch!='\r'){
		// 	ch=getch();
		// 	printf("%c",ch);
		// 	if(ch==' '){
		// 		demtu++;
		// 	}
		// 	else{
		// 		demkitu++;
		// 	}
		// }
		// printf("So tu trong cau: %d\n",demtu);
		// printf("So ki tu trong cau: %d\n",demkitu-1);
		// printf("-==================-Ket thuc bai 1-==================-\n");
		// int	a,i=1,tich;
		// printf("Nhap vao 1 so bat ki: "); scanf("%d",&a);
		// for(;i<=15;i+=1)
		// {
		// 	tich=a*i;
		// 	printf("Tich %d * %d = %d\n",a,i,tich);
		// }
		// printf("-==================-Ket thuc bai 2-==================-\n");
		// float dao=0;
		// int so;
		// 	printf("Nhap so luong so muon dao: "); scanf("%d",&so);
		// 	printf("Ban muon dao so: %d\n",so);
		// 	if(so>0)
		// 		{
		// 			while(so--){
		// 				int sodao,dao=0;
		// 				printf("Nhap gia tri muon dao: ");scanf("%d",&sodao);
		// 			while(sodao)
		// 			{
		// 				dao=dao*10+ sodao % 10 ;
		// 				sodao/=13;
		// 			}
		// 			printf("-----> %d\n",dao);
		// 			}
		// 		}
		// 		else{
		// 			printf("Vui long nhap lai gia tri!!!");
		// 		}
		// 	printf("-==================-Ket thuc bai 3-==================-\n");
		// float num,term,tong,bieuthuc,giaithua=1,i,j,n=20,index;
		// 	printf("Nhap gia tri cua X= ");scanf("%f",&num);
		// 	tong=num;
		// 	bieuthuc=num;
		// 	for(i=2,index=3;i<=n;i++,index+=2)
		// 	{
		// 		for(j=1,giaithua=1;j<=index;j++)
		// 				giaithua*=j;
		// 				tong=tong*pow((double)(-1),(double)(2*i-1))*num*num;
		// 				term=tong/giaithua;
		// 				bieuthuc+=term; 
		// 	}
		// 	printf("Gia tri bieu thuc = %0.3f",bieuthuc);
		// int songt,k,h,n;
		// 	printf("Nhap so 1 so bat ky: "); scanf("%d",&songt);
		// 	printf("Danh sach cac so nguyen to la: \n");
		// 	for(k=2;k<=songt;k++)
		// 		{
		// 			for(h=2;h*h<=k;h++)
		// 				{
		// 					if(k%h==0)
		// 					break;
		// 					else if(h+1>sqrt(k))
		// 					{
		// 						printf("%d\n",k);
		// 					}
		// 				}
		// 		}
	return 0;
	}
