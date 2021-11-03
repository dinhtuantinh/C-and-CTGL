#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool chuaxet[1005];
vector<vector<int> > ke;
int deg1[1005], deg2[1005];

int Euler(){
	for(int i=1; i<=V; i++)
		if(deg1[i] != deg2[i]) return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>V>>E;
		ke.resize(V+5);
		memset(deg1, 0, sizeof(deg1));
		memset(deg2, 0, sizeof(deg2));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			deg1[u]++;
			deg2[v]++;
		}
		cout<<Euler()<<endl;
	}
	return 0;
}
