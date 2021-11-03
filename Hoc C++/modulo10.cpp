#include<bits/stdc++.h>
using namespace std;
int a[2001];
int main(){
	int t,i,j,n,x;
	long long tong,k;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(j=0;j<n;j++){
			cin>>a[j];
		}
		n--;
		tong=a[n];
		k=1;
		for(i=n-1;i>-1;i--){
			k=(k*x)%1000000007;
			tong=(tong+k*a[i])%1000000007;
		}
		cout<<tong<<endl;
	}
	return 0;
}


