#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		int include[n], exclude[n];
		include[0] = a[0];
		exclude[0] = 0;
		for(int i=1; i<n; i++){
			include[i] = exclude[i-1] + a[i];
			exclude[i] = max(include[i-1], exclude[i-1]);
		}
		cout<<max(include[n-1], exclude[n-1])<<endl;
	}
	return 0;
}

