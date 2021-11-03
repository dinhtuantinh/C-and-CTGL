#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
struct dta{
	int a=0,c=0;
};
int dp[1001][1005];
int main(){
	int x;
	cin>>x;
	cin.ignore();
	while(x--){
		int n,V;
		cin >> n >> V ;
		dta tui[n+5];
		for(int i=1;i<=n;i++){
			cin>>tui[i].a;
		}
		for(int i=1;i<=n;i++){
			cin>>tui[i].c;
		}
		memset(dp,0,sizeof(dp));
	//	int m=s1.size(), n=s2.size();
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=V;j++){
				if(j>=tui[i].a) dp[i][j]=max(dp[i-1][j],dp[i-1][j-tui[i].a]+tui[i].c);
				else dp[i][j]=dp[i-1][j];
			}
		}
		cout<<dp[n][V]<<endl;
	}
	return 0;
}
