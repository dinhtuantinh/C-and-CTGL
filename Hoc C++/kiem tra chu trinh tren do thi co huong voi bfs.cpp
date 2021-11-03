#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool chuaxet[1005];
vector<vector<int> > ke;

bool BFS(int u){	
	queue<int> q;
	q.push(u);
	chuaxet[u] = false;
	while(q.size() > 0){
		int t = q.front(); q.pop();
		for(int i=0; i<ke[t].size(); i++){
			int v = ke[t][i];
			if(chuaxet[v]){
				chuaxet[v] = false;
				q.push(v);
			}
			else if(v == u) return true;
		}
	}
	return false;
}

bool isCyclic(){
	for(int u=1; u<=V; u++){
		memset(chuaxet, true, sizeof(chuaxet));
		if(BFS(u)) return true;
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
