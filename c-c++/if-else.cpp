#include<stdio.h>
#include<math.h>
	int main(){
		/* bai tap dieu kien vao 10*/
		int tuoi;
		printf("Nhap vao tuoi cua hoc sinh "); scanf("%d",&tuoi);
		if(tuoi<16)
			{
				printf("Tuoi cua hoc sinh la: %d\n",tuoi);
				printf("Hoc sinh khong du dieu kien vao lop 10\n");
			}
		else{
			printf("Tuoi cua hoc sinh la: %d\n",tuoi);
			printf("Hoc sinh du dieu kien vao lop 10\n");
		}
		/*Bai tap so sanh voi so tu nhien*/
		float a;
		printf("Nhap vao 1 so bat ki "); scanf("%f",&a);
		if(a<100){
			printf("So da nhap nho hon 100\n");
		}
		else{
			if(a==100)
			{
				printf("So da cho bang 100\n");
			}
			else{
				printf("So da nhap lon hon 100\n");
			}
		}
		/*Bai tap tim so lon nhat trong 3 so*/
		float a1,b,c,max;
		printf("Nhap vao gia tri cua A: "); scanf("%f",&a1);
		printf("Nhap vao gia tri cua B: "); scanf("%f",&b);
		printf("Nhap vao gia tri cua C: "); scanf("%f",&c);
		max=a1;
		if(max<b)
			{
				max=b;
			}
		
		if(max<c)
		{
			max=c;
		}
		printf("Gia tri lon nhat trong la: %0.f\n",max);
		/*Bai tap tinh diem trung binh roi in ra xep hang hoc tap*/
		float d1,d2,d3,tb;
		printf("Diem kiem tra he so 1: "); scanf("%f",&d1);
		printf("Diem kiem tra he so 2: "); scanf("%f",&d2);
		printf("Diem kiem tra he so 3: "); scanf("%f",&d3);
		tb=(d1+d2*2+d3*3)/6.0;
		printf("Diem trung binh cua ban la: %0.2f\n",tb);
		if(tb>=9.0)
			{
				printf("Ban dat hang A\n");
			}
		else{
			if(tb>=7.0)
			{
				printf("Ban dat hang B\n");
			}
			else{
				if(tb>=5)
				{
					printf("Ban dat hang C\n");
				}
				else{
					printf("Ban dat hang F\n");
				}
			}
		}
		/*Bai tap tim nghiem pt bac 2*/
		float q,e,r,d,w,dt,q1,q2;
			printf("Nhap vao gia tri cua a: "); scanf("%f",&q);
			printf("Nhap vao gia tri cua b: "); scanf("%f",&e);
			printf("Nhap vao gia tri cua c: "); scanf("%f",&r);
			printf("Phuong trinh vua nhap:\n %0.fx^2 + %0.fx + %0.f = 0\n",q,e,r);
			
			if(!q){
				if(!e){
					printf("Phuong trinh da cho vo nghiem!\n");
				}
				else{
					printf("Phuong trinh da cho co nghiem kep: %0.2f\n",(-r/e));
				}
			}
			dt=pow(e,2)-4*q*r;
			w=sqrt(dt);
			if(dt<0){
				printf("Phuong trinh da cho vo nghiem!\n");
			}
			else{
				if(dt==0){
					q1=q2=(-e)/(2*q);
					printf("Phuong trinh co nghiem kep: %0.2f\n",q1);
				}
				else{
					q1=(-e + w)/2*q;
					q2=(-e - w)/2*q;
					printf("Phuong trinh da cho co nghiem x1= %0.2f\n",q1);
					printf("Phuong trinh da cho co nghiem x2= %0.2f\n",q2);					
				}
			}
		/*Bai tap tim hoa hong khi biet doanh thu*/
		float doanhthu,hoahong;
			printf("Nhap vao doanh thu thang vua roi cua ban: "); scanf("%f",&doanhthu);
			if(doanhthu<=100){
				hoahong=doanhthu*0.05;
				printf("Hoa hong ban nhan duoc: %0.3f\ny",hoahong);
			}
			else{
				if(doanhthu<=300){
					hoahong=doanhthu*0.1;
					printf("Hoa hong ban nhan duoc: %0.3f\n",hoahong);
				}
				else{
					hoahong=doanhthu*0.2;
					printf("Hoa hong ban nhan duoc: %0.3f\n",hoahong);
				}
				}
		/*Bai tap tim cuoc phi di dong*/
		float phi,sophut,tong;
		const int cuocdidong = 25000;
			printf("Nhap so phut goi trong thang cua ban: "); scanf("%f",&sophut);
			if(sophut<=50){
				phi=sophut*600;
				printf("So tien ban phai tra la: %0.2f d\n",phi);
			}
			else{
				if(sophut<=200){
					phi=(sophut-50)*400+50*600;
					printf("So tien ban phai tra la: %0.2f d\n",phi);
				}
				else{
					phi=(sophut-200)*200+200*400+50*600;
					printf("So tien ban phai tra la: %0.2f d\n",phi);
				}
			}
			tong=phi+cuocdidong;
			printf("Tong so tien ban phai tra la: %0.2f d\n",tong);
			/*Bai tap tinh so tien luong sau thue*/
			float luongtt,luongtn,thue;
				printf("Nhap so tien luong thang nay cua ban: "); scanf("%f",&luongtt);
				if(luongtt<7000000){
					luongtn=luongtt-luongtt*0.1;
					thue=0.1*luongtt;
					printf("So tien thue ma ban phai tra la: %0.fd\n",thue);
					printf("Luong thuc nhan cua ban la: %0.fd\n",luongtn);
				}
				else{
					if(luongtt<15000000){
						luongtn=luongtt-luongtt*0.2;
						thue=0.2*luongtt;
						printf("So tien thue ma ban phai tra la: %0.fd\n",thue);
						printf("Luong thuc nhan cua ban la: %0.fd\n",luongtn);
					}
					else{
						luongtn=luongtt-luongtt*0.3;
						thue=0.3*luongtt;
						printf("So tien thue ma ban phai tra la: %0.fd\n",thue);
						printf("Luong thuc nhan cua ban la: %0.fd\n",luongtn);
					}
				}		
		
	return 0;
	}
