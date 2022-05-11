#include<iostream>
	using namespace std;
#include<vector>
	void xuatvector(vector<int> arr){
		for(int i=0;i<arr.size();i++){
			cout<< arr.at(i)<<" ";
		}
	}
	int main(){
		vector<int> arr;
		for(int i=1;i<=5;i++){
			arr.push_back(i);
		}
//		arr.resize(5);
		cout<<"\n\n\t\tXuat mang"<<endl;
//		xuatvector(arr);
//		arr.resize(10);
//		cout<<"\n\n\t\tXuat mang"<<endl;
		xuatvector(arr);
		cout<<"\n\nSo luong phan tu co the chua: "<<arr.max_size();
		cout<<"\n\nKich thuoc vector: "<<arr.capacity();
		cout<<"\n\nPhan tu dau tien cua mang: "<<arr.front();
		cout<<"\n\nPhan tu cuoi mang: "<<arr.back();
		return 0;
	}
