#include<bits/stdc++.h>

using namespace std;
void nhap(int m[],int n){
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
}
void xuat(int m[],int n){
	for(int i=0;i<n;i++){
		cout<<m[i]<<"\t";
	}
	cout<<endl;
}
int BSearch(int m[],int n,int x){
	int left=0;
	int right=n-1;
	int mid;
	do{
		mid=(left+right)/2;
		if(m[mid]==x)
			return mid;
		else if(m[mid]>x)
			right=mid-1;
		else
			left=mid+1;
	}while (left<=right);
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int m[n];
		nhap(m,n);
//		cout<<"mang sau khi nhap:";
//		xuat(m,n);
		int kq=BSearch(m,n,x);
		if(kq==-1) cout<<"No ";
		else 	
			cout<<kq+1;
		cout<<endl;
	}
	return 0;
}


