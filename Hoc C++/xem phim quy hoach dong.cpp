#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int dp[101][25005];
int main(){
	int x;
	x=1;
	//cin.ignore();
	while(x--){
		int W , n;
		cin >> W >> n ;
		int a[n+5];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
//		for(int i=1;i<=n;i++){
//			cin>>tui[i].c;
//		}
		memset(dp,0,sizeof(dp));
	//	int m=s1.size(), n=s2.size();
		
		for(int i=1;i<=n;i++){
			
			for(int j=1;j<=W ;j++){
				if(j>=a[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
				else dp[i][j]=dp[i-1][j];
			}
		}
		cout<<dp[n][W]<<endl;
	}
	return 0;
}
