#include<stdio.h>
#include<stdlib.h>
	int main(){
		int a;
		printf("Nhap a: "); scanf("%d",&a);
		int *b;
		int *c;
		b=&a;
		(*b)++;
		c=b;
		a= (int *)malloc(sizeof(int *))
		printf("A= %d\n",a);
		printf("Dia chi cua A= %d\n",&a);
		a++;
		printf("B= %d\n",*b);
		printf("Dia chi cua B= %d\n",&b);
		printf("Mien gia tri cua B= %d\n",b);
		printf("C= %d\n",*c);
		printf("Dia chi cua C= %d\n",&c);
		printf("Mien gia tri cua bien C= %d\n",c);
		printf("bo nho :%d \n",sizeof(a));
		printf("bo nho :%d \n",sizeof(b));
		printf("bo nho :%d \n",sizeof(c));
	}
