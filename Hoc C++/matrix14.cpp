#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); 
#define ll long long 
const int MAX = 505;  
using namespace std;
int A[MAX][MAX], dp[MAX][MAX] = {0}; 
int main(){
	faster();     
	int t; cin >> t;     
	while(t--){  
		int n, m; 
		cin >> n >> m;  
		for(int i=1; i<=n; i++){  
			for(int j=1; j<=m; j++) cin >> A[i][j]; 
		} 
		int ans = 0;  
		for(int i=1; i<=n; i++){  
			for(int j=1; j<=m; j++){  
				if(A[i][j]){ 
					dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));  
					dp[i][j] += 1;
				} 
				else dp[i][j] = 0; 
				ans = max(ans, dp[i][j]); 
			} 
		} 
		cout << ans << endl;    
	} 
	return 0;
}


