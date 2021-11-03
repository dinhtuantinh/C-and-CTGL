#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void gop(int a[],int n,int b[],int m,int c[],int &k ){
	for(int i=0;i<n;i++){
		c[k]=a[i];
		k++;
	}
	for(int i=0;i<m;i++){
		c[k]=b[i];
		k++;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int A[MAX];
		int B[MAX];
		int C[MAX+MAX];
		int n,m,k=0;
		cin>>n>>m;
		nhap(A,n);
		nhap(B,m);
		gop(A,n,B,m,C,k);
		sort(C,C+k);
		for(int i=0;i<k;i++){
			cout<<C[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
