#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		int n;
		cin>>n;
		
		cin>>s1;
		int dp[n+1][n+1];
		for(int i=0;i<n+1;i++){
			for(int j=0;j<n+1;j++){
				dp[i][j]=0;
			}
		}
		for(int i=1;i<=s1.size();i++){
			for(int j=1;j<=s1.size();j++){
				if(s1[i-1]==s1[j-1]&&i!=j){
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<dp[s1.size()][s1.size()]<<endl;
	}
	return 0;
}

