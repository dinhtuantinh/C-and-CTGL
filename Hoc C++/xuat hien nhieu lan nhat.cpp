#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		map<int,int > dp;
		for(int i=0;i<n;i++){
			dp[a[i]]++;
		}
		int tmp=0;
		for(int i=0;i<100000;i++){
			if(dp[i]>n/2){
				cout<<i<<endl;
				tmp=1;
				break;
			}
		}
		if(tmp==0) cout<<"NO\n";
	}
	return 0;
}

