#include <bits/stdc++.h>
using namespace std;

#define pp pair<int, int>

int V, E, start, u, v, w;
int d[1005], parent[1005];
vector<pp> ke[1005];
priority_queue<pp, vector<pp>, greater<pp> > q;

void Dijkstra(int start){
	for(int i=1; i<=V; i++) {
		d[i] = 1e9;
		parent[i] = -1;
	}
	d[start] = 0;
	while(!q.empty()) q.pop();
	q.push(pp(0, start));
	while(!q.empty()){
		int u=q.top().second; 
		q.pop();
		for(int i=0; i<ke[u].size();i++){
			int v=ke[u][i].second;
			int d_u_v = ke[u][i].first;
			if(d[u] + d_u_v < d[v]){
				d[v] = d[u] + d_u_v;
				parent[v] = u;
				q.push(pp(d[v], v));
			}
		}
	}
	for(int i=1; i<=V; i++) cout<<d[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin>>V>>E>>start;
        for(int i=0; i<=V; i++) ke[i].clear();
        for(int i=1; i<=E; i++){
            cin>>u>>v>>w;
            ke[u].push_back(pp(w, v));
            ke[v].push_back(pp(w, u));
        }
        Dijkstra(start);
    }
    return 0;
}
