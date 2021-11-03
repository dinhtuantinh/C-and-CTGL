#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); 
#define ll long long 
//Dinh Tuan Tinh
using namespace std;
const int mod = 1e9+7; 
const int oo = 505; 
int A[oo][oo], B[oo][oo] = {0}, n, m; 
vector<pair<int, int> > v; 
void haveRoad(int row, int col, queue<pair<int, int> > &q){ 
	if(A[row-1][col] && !B[row-1][col]) q.push(pair<int, int>(row-1, col)); 
	if(A[row][col-1] && !B[row][col-1]) q.push(pair<int, int>(row, col-1));  
	if(A[row+1][col] && !B[row+1][col]) q.push(pair<int, int>(row+1, col)); 
	if(A[row][col+1] && !B[row][col+1]) q.push(pair<int, int>(row, col+1)); 
}
void BFS(){ 
	for(int i=0; i<v.size(); i++){ 
		if(!B[v[i].first][v[i].second]){ 
			queue<pair<int, int> > q; 
			if(!B[v[i].first][v[i].second]) q.push(v[i]); 
			while(!q.empty()){ 
				pair<int, int> par = q.front(); q.pop(); 
				B[par.first][par.second] = 1; 
				haveRoad(par.first, par.second, q); 
			} 
		} 
	} 
}
int main(){
	faster(); 
	int t;
	cin>>t;
	while(t--){
		cin >> n >> m;  
		v.clear(); 
		for(int i=1; i<=n; i++){ 
			for(int j=1; j<=m; j++){ 
				B[i][j] = 0; 
				char c; cin >> c; 
				if(c == 'O'){ 
					A[i][j]=1;
					if(i == 1 || j == 1 || i == n || j == m){ 
						pair<int, int> p = pair<int, int>(i, j); 
						v.push_back(p); 
					} 
				} 
				else A[i][j] = 0; 
			}
		}
		BFS();
		for(int i=1; i<=n; i++){ 
			for(int j=1; j<=m; j++){ 
				if(B[i][j]) cout << 'O' << " "; 
				else cout << 'X' << " "; 
			} 
			cout << endl; 
		} 
		cout << endl; 
	}
	return 0;
}

