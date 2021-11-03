#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool chuaxet[1005];
vector<vector<int> > ke;

bool DFS(int u){	
	stack<int> stk;
	stk.push(u);
	chuaxet[u] = false;
	while(stk.size() > 0){
		int t = stk.top(); stk.pop();
		for(int i=0; i<ke[t].size(); i++){
			int v = ke[t][i];
			if(chuaxet[v]){
				chuaxet[v] = false;
				stk.push(t);
				stk.push(v);
				break;
			}
			else if(v == u) return true;
		}
	}
	return false;
}

bool isCyclic(){
	for(int u=1; u<=V; u++){
		memset(chuaxet, true, sizeof(chuaxet));
		if(DFS(u)) return true;
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E;
		ke.resize(V+5);
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
		}
		if(isCyclic()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
