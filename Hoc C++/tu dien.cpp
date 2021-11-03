#include<bits/stdc++.h>
using namespace std;

vector<string> res;
char a[5][5];
bool visited[5][5];
vector<string> dict;
string s;
int k, m, n;

void Init(){
	cin>>k>>m>>n;
	res.clear();
	dict.resize(k);
	s="";
	memset(visited, false, sizeof(visited));
	for(int i=0; i<k; i++) cin>>dict[i];
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			cin>>a[i][j];
}

void Try(int i, int j, string s){
	if(find(dict.begin(), dict.end(), s) != dict.end())
		res.push_back(s);
	for(int x=i-1; x<=i+1; x++)
		for(int y=j-1; y<=j+1; y++)
			if(x>=1 && x<=m && y>=1 && y<=n && !visited[x][y]){
				visited[x][y]=true;
				Try(x, y, s+a[x][y]);
				visited[x][y]=false;
			}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		Init();
		for(int i=1; i<=m; i++)
			for(int j=1; j<=n; j++){
				memset(visited, false, sizeof(visited));
				visited[i][j]=true;
				Try(i, j, s+a[i][j]);
			}
		if(res.size()==0) cout<<"-1";
		for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
		cout<<endl;
	}
	return 0;
}

