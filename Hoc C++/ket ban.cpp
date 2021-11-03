#include<bits/stdc++.h>
using namespace std;

vector<int> ke[100005];
bool chuaxet[100005];
int V, E;
int res;

void BFS(int i){
	int size=0;
	queue<int> q;
	q.push(i);
	size++;
	chuaxet[i] = false;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int j=0; j<ke[u].size(); j++){
			int v=ke[u][j];
			if(chuaxet[v]){
				chuaxet[v] = false;
				q.push(v);
				size++;
			}
		}
	}
	if(size>res) res=size;
}

main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=1; i<=V; i++){
			ke[i].clear();
		}
		cin>>V>>E;
		res=-1;
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=0; i<E; i++){
			int u, v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		for(int i=1; i<=V; i++){
			if(chuaxet[i]){
				BFS(i);
			}
		}
		cout<<res<<endl;
	}
}

