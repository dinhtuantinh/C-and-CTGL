#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n, k, a[105];
void nhap(){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
void xuat(){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void sinh(){
	int i=n-1;
	while(i>0&&a[i]==1){
		i--;
	}
	if(i>=0){
		int dem=0;
		a[i]=1;
		for(int j=i+1;j<n;j++){
			a[j]=0;
		}
		for(int x=0;x<n;x++){
			if(a[x]==1) dem++;
		}
		if(dem==k){
			xuat();
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		sinh();
	}
	return 0;
}

