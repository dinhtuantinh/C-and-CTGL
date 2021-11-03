#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool ok;
bool chuaxet[1005];
int color[1005];
vector<vector<int> > ke;

void DFS(int u, int t){	
	chuaxet[u]=false;
	for(int i=0; i<ke[u].size(); i++){
		int v=ke[u][i];
		if(chuaxet[v]){
			if(color[v]==0) color[v]=3-color[u];
			DFS(v, u);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E;
		ke.resize(V+5);
		memset(color, 0, sizeof(color));
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		ok=true;
		for(int i=1; i<=V; i++){
			if(color[i]==0){
				color[i]=1;
				DFS(i, 0);
			}
		}
		for(int u=1; u<=V; u++)
			for(int v=0; v<ke[u].size(); v++)
				if(color[u]==color[ke[u][v]]) ok=false;
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
