#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool chuaxet[1005];
vector<vector<int> > ke;
queue<int> q;

void ReInit(){
	memset(chuaxet, true, sizeof(chuaxet));
}

void BFS(int u){			
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int s=q.front(); 
		q.pop();
		for(int t=0; t<ke[s].size(); t++){
			if(chuaxet[ke[s][t]]){
				chuaxet[ke[s][t]]=false;
				q.push(ke[s][t]);
			}
		}
	}
}

bool ok(){
	for(int u=1; u<=V; u++)
		if(chuaxet[u]) return false;
	return true;
}

bool Strongly_Connected(){
	ReInit();
	for(int u=1; u<=V; u++){
		BFS(u);
		if(!ok())
			return false;
		else 
			ReInit();
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E;
		ke.resize(V+5);
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		if(Strongly_Connected()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
