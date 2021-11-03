#include<bits/stdc++.h>
//mang 2 chieu
using namespace std;
void Nhap(int **&M,int n){//nhap ma tran 2 chieu
	srand(time(NULL));
	M=new int*[n];
	for(int i=0;i<n;i++){
		*(M+i)=new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			*(*(M+i)+j)=-50+rand()%151;
		}
	}
}
void Xuat(int **M,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<*(*(M+i)+j)<<"\t";
		}
		cout<<"\n";
	}
}
int Max(int **M,int n){
	int m=*(*(M+0)+0);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(m<*(*(M+i)+j)) m=*(*(M+i)+j);
		}
	}
	cout<<"\nMax="<<m;
}
int main(){
	int **M;
	int n=5;
	Nhap(M,n);
	cout<<"Mang nhap:\n";
	Xuat(M,n);
	Max(M,n);
	return 0;
}


