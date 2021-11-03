#include<bits/stdc++.h>

using namespace std;
void Sohople(int a[],int n,int sohople[],int &demhl)
{
	demhl=0;
	for(int i=0;i<n;i++){
		if(a[i]!=0) sohople[demhl++]=a[i];
	}
}
void Sokhonghople(int a[],int n,int sokhonghople[],int &demkhl){
	demkhl=0;
	for(int i=0;i<n;i++){
		if(a[i]==0) sokhonghople[demkhl++]=a[i];
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sokhonghople[n];
		int sohople[n];
		int demhl, demkhl;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i+1]!=0&&a[i]==a[i+1]){
				a[i]=a[i]*2;
				a[i+1]=0;
			}
		}
		Sohople(a,n,sohople,demhl);
		Sokhonghople(a,n,sokhonghople,demkhl);
		for(int i=0;i<demhl;i++){
			a[i]=sohople[i];
		}
		for(int i=demhl;i<n;i++){
			a[i]=sokhonghople[--demkhl];
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


