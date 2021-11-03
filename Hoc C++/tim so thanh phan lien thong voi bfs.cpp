#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool chuaxet[1005];
vector<vector<int> > ke;
queue<int> q;

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

int Components(){
	int res=0;
	for(int u=1; u<=V; u++){
		if(chuaxet[u]){
			res++;
			BFS(u);
		}
	}
	return res;
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
		cout<<Components()<<endl;
	}
	return 0;
}
