#include<iostream>

using namespace std;
void nhap(long long a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void sapxep(long long a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n];
		long long b[m];
		nhap(a,n);
		nhap(b,m);
		sapxep(a,n);
		sapxep(b,m);
		long long kq=a[n-1]*b[0];
		cout<<kq;
		cout<<endl;
	}
	return 0;
}


