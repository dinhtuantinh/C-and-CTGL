#include<bits/stdc++.h>
using namespace std;
int a[1000006];
void sang(int n){
	for(int i=2;i<=n;i++){
		a[i]=1;
	}
	for(int i=2;i<=n;i++){
		if(a[i]==1){
			for(int j=i*i;j<=n;j=j+i){
				a[j]=0;
			}
		}
	}
}
void in(int n){
	cout<<"1 ";
	for(int i=2;i<=n;i++){
		if(a[i]==1){
			cout<<i<<" ";
		}
		else{
			for(int j=2;j<=sqrt(i);j++){
				if(i%j==0&&a[j]==1){
					cout<<j<<" ";
					j=i;
				}
				//j=i;
			}
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		sang(n);
		in(n);
	}
	return 0;
}


