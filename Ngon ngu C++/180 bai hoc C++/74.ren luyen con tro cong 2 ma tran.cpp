#include<bits/stdc++.h>

using namespace std;
void Nhap(int **&M,int n){
	
	M=new int*[n];
	for(int i=0;i<n;i++){
		*(M+i)=new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			*(*(M+i)+j)=rand()%11;
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
int **CongMT(int **M1,int **M2,int n){
	int **M3=new int*[n];
	for(int i=0;i<n;i++){
		*(M3+i)=new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			*(*(M3+i)+j)=*(*(M1+i)+j)+*(*(M2+i)+j);
		}
	}
	return M3;
}
int main(){
	srand(time(NULL));
	int **M1,**M2,n=3;
	Nhap(M1,n);
	Nhap(M2,n);
	cout<<"M1:\n";
	Xuat(M1,n);
	cout<<"\nM2:\n";
	Xuat(M2,n);
	int **M3=CongMT(M1,M2,n);
	cout<<"\nMa tran M3:\n";
	Xuat(M3,n);
	return 0;
}


