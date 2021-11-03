#include<bits/stdc++.h>

using namespace std;
void Nhap(int *&a,int n){//mang
	srand(time(NULL));
	a=new int[n];
	for(int i=0;i<n;i++){
		*(a+i)=rand()%101;
	}
} 
void Xuat(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"\t";
	}
}
void swap(int *&pa,int *pb){
	int temp=*pa;
	*pa=*pb;
	*pb=temp;
}
void sapxepgiam(int *&a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(*(a+i)<*(a+j)){
				swap(*(a+i),*(a+j));
			}
		}
	}
}
int main(){
	int *a;
	int n=10;
	Nhap(a,n);
	Xuat(a,n);
	cout<<"\nSau khi sap xep giam:\n";
	sapxepgiam(a,n);
	Xuat(a,n);
	return 0;
}


