#include "thuviencuatoi.h"

    bool kiemtrasont(int a[],int n){
		for (int i; i<n; i++){
			bool kt = true;
			if (a[i]<2){
				kt = false;
			}else {
				for(int j=2;j<a[i];j++){
					if(a[i]%j==0){
						kt= false;
						break;
					}
				}
			}
				if(kt==true){
					printf("\t%d\t",a[i]);
				}
		}
	}

    bool timsosieunt(int arr[],int n){ 
			for(int i; i<n; i++){
			bool kt=true;
			int tam=arr[i];
			while(tam !=0){
			if(tam<2){
				kt = false;
			}else {
				for(int j=2;j<tam;j++){
					if(tam % j == 0){
						kt= false;
						break;
					}
				}
				}
				if(kt==true){
					tam= tam/10;
			}else{
				break;
			}
			}
			if(kt==true){
				printf("\t%d\t",arr[i]);
			}
		}
