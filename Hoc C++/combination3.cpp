#include<bits/stdc++.h>
using namespace std;
int a[100],kt[100];
void Hoanvi(int k,int n){
	if(k>n){
		for(int i=1;i<=n;i++) cout<<a[i];
		cout<<" ";
	}
	else{
		for(int i=1;i<=n;i++){
			if(kt[i]==0){
				a[k]=i;
				kt[i]=1;
				Hoanvi(k+1,n);
				kt[i]=0;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Hoanvi(1,n);
		cout<<endl;
	}
	return 0;
}


