#include<bits/stdc++.h>
using namespace std;

int V, E, u, v, s, e;
bool chuaxet[1005];
int truoc[1005];
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
				truoc[ke[s][t]]=s;
			}
		}
	}
}

void Path(int s, int t){
	if(truoc[t]==0) cout<<"NO";
	else cout<<"YES";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E;
		ke.resize(V+1);
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		int q;
		cin>>q;
		while(q--){
			memset(chuaxet, true, sizeof(chuaxet));
			memset(truoc, 0, sizeof(truoc));
			cin>>s>>e;
			BFS(s);
			Path(s, e);
			cout<<endl;
		}
	}
	return 0;
}
