#include<bits/stdc++.h>
using namespace std;

int V, E, u, v, s;
bool chuaxet[1005];
vector<vector<int> > ke;
queue<int> q;

void BFS(int u){			
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int s=q.front(); 
		q.pop();
		cout<<s<<" ";
		for(int t=0; t<ke[s].size(); t++){
			if(chuaxet[ke[s][t]]){
				chuaxet[ke[s][t]]=false;
				q.push(ke[s][t]);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E>>s;
		ke.resize(V+1);
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		BFS(s);
		cout<<endl;
	}
	return 0;
}
