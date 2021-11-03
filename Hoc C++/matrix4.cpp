#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long 
using namespace std; 
const int oo = 105; 
//Dinh Tuan Tinh 
/* 
y tuong dung BFS va mang B[] de danh dau nhung vi tri da di qua 
duyet toan bo vector v den khi nao ko con diem nao co the di 
*/ 
int A[oo][oo], B[oo][oo] = {0}; 
// tao 1 class Local de Local.x - hang thu i va Local.y - cot thu j 
// co the dung pair<first, second> thay cho class Local  
class Local{ 
	public: 
		int x, y; 
}; 
vector<Local> v; // vector chua nhung vi tri ma tai do A[local.x][local.y] = 1 
// ham tim vi tri neu xung quanh co the di(A[i][j] = 1) thi push vao queue 
void findLocal(int row, int col, queue<Local> &qt){ 
	for(int i=row-1; i<=row+1; i++){ 
		for(int j=col-1; j<=col+1; j++){ 
			if(A[i][j] && !B[i][j]){ 
				B[i][j] = 1; 
				Local lc; lc.x = i; lc.y = j; 
				qt.push(lc); 
			} 
		} 
	}
}
// BFS 
int BreadthFirstSearch(){ 
	queue<Local> q; 
	int count = 0; 
	for(int i=0; i<v.size(); i++){ 
		Local lcl = v[i]; 
		if(!B[lcl.x][lcl.y]){ 
			B[lcl.x][lcl.y] = 1; 
			queue<Local> qt; qt.push(lcl);
			while(!qt.empty()){
				Local lt=qt.front();qt.pop();
				int row = lt.x, col = lt.y; 
				findLocal(row, col, qt); 
			}
			count++; 
		} 
	} 
	return count; 
} 
int main(){
	faster();    
	int t; 
	cin >> t;
	while(t--){  
		v.clear();  
		int n, m; 
		cin >> n >> m;  
		for(int i=1; i<=n; i++){  
			for(int j=1; j<=m; j++){  
				cin >> A[i][j]; B[i][j] = 0;  
				// neu A[i][j] = 1 thi them vao vector v vi tri Local.i va Local.j  
				if(A[i][j]){  
					Local lp;  
					lp.x = i; lp.y = j;  
					v.push_back(lp); 
				} 
			} 
		} 
		int ans = BreadthFirstSearch(); 
		cout << ans << endl;     
	}
	return 0;
}


