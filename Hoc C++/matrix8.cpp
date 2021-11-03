#include<bits/stdc++.h> 
#define pb push_back 
#define all(a) a.begin(), a.end() 
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); 

using namespace std; 
const int oo = 50; 
int A[oo][oo], n; 
void solved(){
	int SIZE = 4*n*4*n; 
	vector<int> COIL_A, COIL_B; 
	int col_start = 4*n, row_start = 4*n-2, col_end = 4*n-2, row_end = 4*n-4;
	int value = 1-4*n; 
	while(COIL_A.size() < SIZE/2){ 
		for(int i=0; i<col_start; i++){ 
			value += 4*n; 
			COIL_A.pb(value); 
		} 
		for(int i=0; i<row_start; i++){ 
			value++; 
			COIL_A.pb(value); 
		} 
		for(int i=0; i<col_end; i++){ 
			value -= 4*n; 
			COIL_A.pb(value); 
		} 
		for(int i=0; i<row_end; i++){ 
			value--; 
			COIL_A.pb(value); 
		} 
		row_end -= 4; row_start -= 4; 
		col_end -= 4; col_start -= 4; 
	} 
	reverse(all(COIL_A)); 
	for(auto ele: COIL_A) COIL_B.pb(SIZE - ele + 1); 
	for(auto ele: COIL_B) cout << ele << " "; 
	cout << endl; 
	for(auto ele: COIL_A) cout << ele << " "; 
}
int main(){ 
	faster(); 
	int t; 
	cin >> t; 
	while(t--){ 
		cin >> n; 
		int res = 0; 
		for(int i=0; i<4*n; i++){ 
			for(int j=0; j<4*n; j++) A[i][j] = ++res; 
		} 
		solved(); 
		cout << endl; 
	} 
} 
 
