#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		long long tempArr[n];
		for(long long i=0;i<n;i++){
			tempArr[i]=a[i];
		}
		a[0]=tempArr[0] * tempArr[1];
		a[n-1]=tempArr[n-1] * tempArr[n-2];
		for(long long i=1;i<n-1;i++){
			a[i]=tempArr[i-1] * tempArr[i+1];
		}
		for(long long i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


