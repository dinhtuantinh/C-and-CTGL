#include<bits/stdc++.h>
using namespace std;

int a[30][30];
int n, m;
int res;
vector<vector<int> > ke;

void Init(){
	res=0;
	memset(a, 0, sizeof(a));
	for(int i=0; i<m; i++){
		int u, v;
		cin>>u>>v;
		a[u][v]=1;
		a[v][u]=1;
	}
}

void Try(int u, int len){
	res=max(res, len);
	for(int v=0; v<n; v++){
		if(a[u][v]==1){
			a[u][v]=0;
			a[v][u]=0;
			Try(v, len+1);
			a[u][v]=1;
			a[v][u]=1;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		Init();
		for(int u=0; u<n; u++){
			Try(u, 0);
		}
		cout<<res<<endl;
	}
	return 0;
}

