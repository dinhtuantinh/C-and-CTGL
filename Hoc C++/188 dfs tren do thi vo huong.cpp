#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
vector< int > ke[1001];
bool check[1001];

void DFS(int u){
	cout << u << ' ';
	check[u] = true;
	for(int i = 0 ; i< ke[u].size() ; i ++ ){
		int v = ke[u][i];
		if(check[v] == false){
			DFS(v);
		}
	}
}
int main(){
	int t,dinh, canh, x;
	cin>>t;
	while(t--){
		memset(check,false,sizeof(check));
		for(int i=0;i<1001;i++){
			ke[i].clear();
		}
		//int 
		cin >> dinh >> canh >> x; 
	 	vector< int > ke[1001];
		for(int i=0;i<canh;i++){
			int u, v;
			// u -> v 
			cin >> u >> v; 
			ke[u].push_back(v);
		//	ke[v].push_back(u);
		}
//		DFS_STACK(x);
		DFS(x);
		cout<<endl;
	}
	return 0;
}

