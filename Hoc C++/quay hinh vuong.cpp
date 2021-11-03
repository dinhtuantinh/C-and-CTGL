#include<bits/stdc++.h>
using namespace std;

int m, n;
int a[1001][1001];

struct dta{
	int i;
	int j;
	int l;
};

int solve(){
	set<pair<int, int> > visit;
	queue<dta> res;
	dta x;
	x.i=x.j=1;
	x.l=0;
	res.push(x);
	visit.insert(pair<int, int>(1, 1));
	while(!res.empty()){
		dta t = res.front();
		res.pop();
		if(t.i==m && t.j==n)
			return t.l;
		pair<int, int> tmp = pair<int, int>(t.i+a[t.i][t.j], t.j);
		if(visit.find(tmp) == visit.end()){
			x.i=t.i+a[t.i][t.j];
			x.j=t.j;
			x.l=t.l+1;
			res.push(x);
			visit.insert(tmp);
		}
		tmp = pair<int, int>(t.i, t.j+a[t.i][t.j]);
		if(visit.find(tmp) == visit.end()){
			x.i=t.i;
			x.j=t.j+a[t.i][t.j];
			x.l=t.l+1;
			res.push(x);
			visit.insert(tmp);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		for(int i=1; i<=m; i++)
			for(int j=1; j<=n; j++)
				cin>>a[i][j];
		cout<<solve()<<endl;
	}
	return 0;
}

