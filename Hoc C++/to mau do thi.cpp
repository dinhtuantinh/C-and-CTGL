#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > ke;
int color[30];
int V, E, m, u, v;

bool ok(int u, int c){
	for(int i=0; i<ke[u].size(); i++){
		if(color[ke[u][i]]==c) return false;
	}
	return true;
}

bool Try(int u){
	if(u==V+1) return true;
	for(int c=1; c<=m; c++){
		if(ok(u, c)){
			color[u]=c;
			if(Try(u+1)) return true;
			color[u]=0;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E>>m;
		ke.resize(V+5);
		memset(color, 0, sizeof(color));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		if(Try(1)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

