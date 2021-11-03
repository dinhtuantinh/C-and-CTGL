#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],dem=0;
		int dp[100000]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
			dp[a[i]]++;
		}
		for(int i=0;i<100000;i++){
			if(dp[i]>1){
				dem+=dp[i];
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

