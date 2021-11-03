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
		if(chuaxet[u]) return true;
	return false;
}

bool isTree(){
	int res=0;
	for(int u=1; u<=V; u++){
		if(chuaxet[u]){
			res++;
			BFS(u);
		}
	}
	return res==1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V;
		ke.resize(V+5);
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=1; i<V; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		if(isTree()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
