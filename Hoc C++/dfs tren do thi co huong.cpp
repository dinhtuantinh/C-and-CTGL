#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int V, E, u, v, start;
bool chuaxet[1005];
vector<vector<int> > ke;
stack<int> stk;

void DFS(int u){	
	stk.push(u);
	cout<<u<<" ";
	chuaxet[u]=false;
	while(!stk.empty()){
		int s=stk.top(); 
		stk.pop();
		for(int t=0; t<ke[s].size(); t++){
			if(chuaxet[ke[s][t]]){
				cout<<ke[s][t]<<" ";
				chuaxet[ke[s][t]]=false;
				stk.push(s);
				stk.push(ke[s][t]);
				break;
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E>>start;
		ke.resize(V+1);
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
		}
		DFS(start);
		cout<<endl;
	}
	return 0;
}
