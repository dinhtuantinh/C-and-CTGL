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
}
int LinearSearch(int m[],int n,int x){
	for(int i=0;i<n;i++){
		if(m[i]==x) return i+1;
	}
	return -1;
}
int main(){
	int n,x;
	cin>>n>>x;
	int m[n];
	nhap(m,n);
	xuat(m,n);
	cout<<endl;
	int k=LinearSearch(m,n,x);
	if(k==-1){
		cout<<"Khong tim thay "<<x<<endl;
	}
	else{
		cout<<"Tim thay "<<x<<" o vi tri "<<k<<endl;
	}
	return 0;
}


