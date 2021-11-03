#include<bits/stdc++.h>
//Dinh Tuan Tinh
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); 
#define pb push_back 
#define ll long long 
using namespace std;
const int oo = 105; 
int A[oo][oo]; 
int main(){
	faster(); 
	int t;
	cin>>t;
	while(t--){
		vector<int> v;  
		int n, m, k; cin >> n >> m >> k; 
		for(int i=0; i<n; i++){ 
			for(int j=0; j<m; j++) cin >> A[i][j];
		} 
		int d = 0, l = n, s = m; 
		int count = 0; 
		while(d <= n/2 && d <= m/2){ 
			for(int i=d; i<s; i++) 
				v.pb(A[d][i]); 
			for(int i=d+1; i<l; i++) 
				v.pb(A[i][s-1]); 
			for(int i=s-2; i>=d; i--) 
				v.pb(A[l-1][i]); 
			for(int i=l-2; i>d; i--) 
				v.pb(A[i][d]); d++; l--; s--; 
		} 
		cout << v[k-1] << endl; 
	}
	return 0;
}

