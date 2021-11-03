#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n, k, a[105], stop=0;
void khoitao(){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
void xuat(){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) dem++;
	}
	if(dem==k){
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}
void sinh(){
	int i=n-1;
	while(i>=0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==-1){
		stop=1;
	}
	else a[i]=1;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		khoitao();
		stop=0;
		xuat();
		sinh();
	}
	return 0;
}

