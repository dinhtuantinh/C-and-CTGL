#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;cin>>n;
		long long a[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		long long d[100005];
		for(long long i=0;i<100005;i++) d[i]=0;
		for(long long i=0;i<n;i++){
			d[a[i]]++;
		}
		int count=0;
		for(long long i=0;i<100005;i++){
			if(d[i]==2) cout<<a[i]<<endl;
			count=1;
			break;
		}
		if(count==0) cout<<"NO"<<endl;
	}
	return 0;
}

