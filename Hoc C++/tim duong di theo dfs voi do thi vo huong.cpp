#include<bits/stdc++.h>
using namespace std;

int V, E, u, v, s, e;
bool chuaxet[1005];
int truoc[1005];
vector<vector<int> > ke;
stack<int> stk;

void DFS(int u){	
	stk.push(u);
	chuaxet[u]=false;
	while(!stk.empty()){
		int s=stk.top(); 
		stk.pop();
		for(int t=0; t<ke[s].size(); t++){
			if(chuaxet[ke[s][t]]){
				truoc[ke[s][t]]=s;
				chuaxet[ke[s][t]]=false;
				stk.push(s);
				stk.push(ke[s][t]);
				break;
			}
		}
	}
}

void Path(int s, int t){
	stack<int> res;
	if(truoc[t]==0) cout<<"-1";
	else{
		res.push(t);
		int u=truoc[t];
		while(u!=s){
			res.push(u);
			u=truoc[u];
		}
		res.push(s);
	}
	while(!res.empty()){
		cout<<res.top()<<" ";
		res.pop();
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E>>s>>e;
		ke.resize(V+1);
		memset(chuaxet, true, sizeof(chuaxet));
		memset(truoc, 0, sizeof(truoc));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		DFS(s);
		Path(s, e);
		cout<<endl;
	}
	return 0;
}
