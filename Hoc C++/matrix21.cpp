#include<bits/stdc++.h>
//Dinh Tuan Tinh
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); 
const int oo = 250; 
#define ll long long
using namespace std;
ll A[oo][oo], dp[oo][oo] = {0}, n, m; 
ll maxRectangle(){ 
	ll ans = 0;
	for(int i=1; i<=n; i++){ 
		for(int j=1; j<=m; j++){ 
			ll sum = 0; 
			for(int k=j; k<=m; k++){ 
				sum += A[i][k];
				dp[j][k] = (dp[j][k] >= 0)? dp[j][k] + sum : sum; 
				ans = max(ans, dp[j][k]); 
			} 
		} 
	} 	
	return ans; 
}
int main(){
	faster(); 
	int t;
	cin>>t;
	while(t--){
		cin >> n >> m;  
		for(int i=1; i<=n; i++){  
			for(int j=1; j<=m; j++){  
				cin >> A[i][j]; 
			} 
		}  
		for(int i=0; i<oo; i++){ 
			for(int j=0; j<oo; j++){
				dp[i][j] = 0; 
			}
		} 
		cout << maxRectangle() << endl; 
	}
	return 0;
}

