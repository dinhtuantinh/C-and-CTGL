#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool chuaxet[1005];
vector<vector<int> > ke;
bool cycle;

void DFS(int u, int t){	
	chuaxet[u]=false;
	for(int i=0; i<ke[u].size(); i++){
		int v=ke[u][i];
		if(chuaxet[v]) DFS(v, u);
		else if(v!=t) cycle=true;
	}
}

bool isCyclic(){
	cycle=false;
	for(int u=1; u<=V; u++){
		memset(chuaxet, true, sizeof(chuaxet));
		DFS(u, 0);
		if(cycle) return true;
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cycle=false;
		ke.clear();
		cin>>V>>E;
		ke.resize(V+5);
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		if(isCyclic()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
