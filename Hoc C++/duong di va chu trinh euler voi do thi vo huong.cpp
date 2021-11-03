#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool chuaxet[1005];
vector<vector<int> > ke;
int deg[1005];

int Euler(){
	for(int i=1; i<=V; i++)
		if(deg[i]%2==1) return 0;
	return 1;
}

int semiEuler(){
	int c=0;
	for(int i=1; i<=V; i++)
		if(deg[i]%2==1) c++;
	return c==2 || c==0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E;
		ke.resize(V+5);
		memset(deg, 0, sizeof(deg));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[u].push_back(v);
			deg[u]++;
			deg[v]++;
		}
		cout<<Euler()+semiEuler()<<endl;
	}
	return 0;
}
