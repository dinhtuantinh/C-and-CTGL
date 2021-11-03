#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n;
int d[100005];

void Sang(){
	for(int i=2;i<=sqrt(n);i++){
		if(d[i]==0){
			for(int j=2*i;j<=n;j+=i){
				d[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++){
		cout<<d[i]<<" ";
	}
	cout<<endl;
	for(int i=2;i<=n;i++){
		if(d[i]==0){
			cout<<i<<" ";
		}
	}
}

int main(){
	cin>>n;
	Sang();
	return 0;
}

