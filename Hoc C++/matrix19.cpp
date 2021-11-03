#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false); 
//Dinh Tuan Tinh
using namespace std;
const int oo = 105; 
int A[oo][oo], n, m; 
void increase_i(int &index_i, int &index_j){ 
	int limit = index_i; 
	cout << A[index_i][index_j] << " "; 
	while(index_j > limit){  
		index_i++; index_j--; 
		cout << A[index_i][index_j] << " "; 
	} 
} 
void increase_j(int &index_i, int &index_j){ 
	int limit = index_j; 
	cout << A[index_i][index_j] << " "; 
	while(index_i > limit){ 
		index_i--; index_j++; 
		cout << A[index_i][index_j] << " "; 
	}
} 
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
		cin >> n >> m; 
		for(int i=0; i<n; i++){ 
			for(int j=0; j<n; j++) cin >> A[i][j]; 
		} 
		int index_i = 0, index_j = 0; 
		bool move = true; // true: di len / false: di xuong 
		while(index_i < n && index_j < m){ 
			if(!move){ 
				increase_i(index_i, index_j); 
				if(index_i == n-1) index_j++; 
				else index_i++; 
				move = true; // doi huong di len 
			} 
			else{ 
				increase_j(index_i, index_j); 
				if(index_j == m-1) index_i++; 
				else index_j++; 
				move = false; // doi huong di xuong 
			} 
		} 
		cout << endl; 
	}
	return 0;
}

