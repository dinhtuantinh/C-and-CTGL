#include<bits/stdc++.h>
using namespace std;

int parent[1005], V, E;

struct edge{
	int w;
	int s;
	int e;
};

bool cmp(edge a, edge b){
	return a.w < b.w;
}

int find(int i){
	if(parent[i] == 0) return i;
	return find(parent[i]);
}

void Union(int x, int y){
    int px = find(x);
    int py = find(y);
    if(px != py) parent[px] = py;
}

bool cycle(vector<edge> stree){
    memset(parent, 0, sizeof(parent));
    for (int i=0; i<stree.size(); i++) {
        int x = find(stree[i].s);
        int y = find(stree[i].e);
        if(x == y) return true;
        Union(x, y);
    }
    return false;
}

void Kruskal(edge canh[]){
	vector<edge> stree;
	sort(canh, canh+E, cmp);
	stree.push_back(canh[0]);
	int res=canh[0].w;
	for(int i=1; i<E; i++){
		stree.push_back(canh[i]);
		if(!cycle(stree)) res+=canh[i].w;
		else{
			stree.pop_back();
			continue;
		}
		if(stree.size()>V-1) break;
	}
	cout<<res<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>V>>E;
        edge canh[E];
		for(int i=0; i<E; i++)
			cin>>canh[i].s>>canh[i].e>>canh[i].w;
		Kruskal(canh);
	}
	return 0;
}

