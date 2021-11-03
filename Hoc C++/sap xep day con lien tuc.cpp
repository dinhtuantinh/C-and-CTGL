#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n];
		for(long i=0;i<n;i++){
			cin>>a[i];
		}
		long temp[n];
		for(long i=0;i<n;i++){
			temp[i]=a[i];
		}
		sort(temp,temp+n);
		long L=0, R=0;
		for(long i=0;i<n;i++){
			if(a[i]!=temp[i]){
				L=i+1;
				break;
			}
		}
		for(long i=n-1;i>=0;i--){
			if(a[i]!=temp[i]){
				R=i+1;
				break;
			}
		}
		cout<<L<<" "<<R;
		cout<<endl;
	}
	return 0;
}
