#include<bits/stdc++.h>
using namespace std;

int V, E, u, v, ok;
bool chuaxet[30];
vector<int> ke[20];

void Try(int u, int count){
	if(count==V){
		ok=1;
		return;
	}
	for(int i=0; i<ke[u].size(); i++){
		int v=ke[u][i];
		if(chuaxet[v]){
			chuaxet[v]=false;
			Try(v, count+1);
			chuaxet[v]=true;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ok=0;
		for(int i=0;i<20;i++) ke[i].clear();
		cin>>V>>E;
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		for(int u=1; u<=V; u++){
			chuaxet[u]=false;
			Try(u, 1);
			chuaxet[u]=true;
		}
		cout<<ok<<endl;
	}
	return 0;
}
