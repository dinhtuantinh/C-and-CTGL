#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		long long ans=a[0];
		for(int i=0;i<n;i++){
			long long check=1;
			for(int j=i;j<n;j++){
				check*=a[j];
				ans=max(ans,check);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


