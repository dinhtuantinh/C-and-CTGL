#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); 
#define ll long long 
//Dinh Tuan Tinh
using namespace std;
const int mod = 1e9+7; 
const int oo = 505; 
int A[oo][oo], H[oo] = {0}; 
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		int n, m; cin >> n >> m;  
		for(int i=1; i<=n; i++){  
			for(int j=1; j<=m; j++) cin >> A[i][j]; 
		} 
		int ans = 0; 
		for(int i=1; i<=n; i++){ 
			for(int j=1; j<=m; j++) H[j] = (A[i][j])? H[j] + 1 : 0; 
			int L[oo], R[oo], D[oo], P[oo]; 
			int top = 0; D[0] = 0;  
			for(int j=1; j<=m; j++){ 
				while(top > 0 && H[D[top]] >= H[j]) top--; 
				L[j] = D[top] + 1; 
				D[++top] = j; 
			} 
			P[0] = m+1; top = 0; 
			for(int j=m; j>=1; j--){ 
				while(top > 0 && H[P[top]] >= H[j]) top--; 
				R[j] = P[top] - 1; 
				P[++top] = j; 
			} 
			for(int j=1; j<=m; j++) ans = max(ans, (R[j] - L[j] + 1) * H[j]); 
		} 
		cout << ans << endl; 
	}
	return 0;
}

