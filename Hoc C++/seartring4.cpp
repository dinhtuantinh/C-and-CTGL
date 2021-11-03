#include<iostream>

using namespace std;
void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
}
int timX(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			cout<<i+1<<endl;
			return 0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		nhap(a,n);
		timX(a,n,x);
	}
	return 0;
}


