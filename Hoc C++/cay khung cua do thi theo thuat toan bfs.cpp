#include<bits/stdc++.h>
using namespace std;

int V, E, u, v, root;
bool chuaxet[1005];
vector<vector<int> > ke;
vector<pair<int, int> > tree;

void BFS(){	
	queue<int> q;
	q.push(root);
	chuaxet[root] = false;
	while(q.size() > 0){
		int u = q.front(); q.pop();
		for(int i=0; i<ke[u].size(); i++){
			int v = ke[u][i];
			if(chuaxet[v]){
				chuaxet[v] = false;
				tree.push_back(pair<int, int>(u, v));
				q.push(v);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		tree.clear();
		ke.clear();
		cin>>V>>E>>root;
		ke.resize(V+5);
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		BFS();
		if(tree.size()<V-1) cout<<-1<<endl;
		else 
			for(int i=0; i<tree.size(); i++)
				cout<<tree[i].first<<" "<<tree[i].second<<endl;
	}
	return 0;
}
