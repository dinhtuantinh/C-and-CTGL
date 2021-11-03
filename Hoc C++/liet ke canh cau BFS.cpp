#include<bits/stdc++.h>
using namespace std;
 
vector< int > ke[1005];
bool check[1003];
 
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(q.size() > 0 ){
        int top = q.front(); q.pop();
        check[top] = true;
        for(int i = 0 ; i< ke[top].size(); i ++){
            int v = ke[top][i];
            if(check[v] == false){
                check[v]=true;
                q.push(v);
            }
        }
    }
}
 
int main(){
 	int t;
 	cin>>t;
 	while(t--){
	 
	    int n,m;
	    cin >> n >> m ;
	    memset(check,false,sizeof(check));
	    vector< pair<int, int> > canh;
	    for(int i=1;i<=m;i++){
	        int u, v;
	        cin >> u >> v;
	        ke[u].push_back(v);
	        ke[v].push_back(u);
	        canh.push_back({u,v});
	    }
	    int lien_thong_final = 0;
	    for(int i=1; i<=n ; i ++ ){
	        if(check[i] == false){
	            lien_thong_final += 1;
	            BFS(i);
	        }
	    }
	    for(int i=0;i<canh.size();i++){
	 
	        for(int j=0;j<1001;j++){
	            ke[j].clear();
	            check[j]=false;
	        }
	        for(int j=0;j<canh.size();j++){
	            if(i!=j){
	                int u = canh[j].first;
	                int v = canh[j].second;
	                ke[u].push_back(v);
	                ke[v].push_back(u);
	            }
	        }
	 
	        int lien_thong = 0;
	        for(int i=1; i<=n ; i ++ ){
	            if(check[i] == false){
	                lien_thong += 1;
	                BFS(i);
	            }
	        }
	 
	        if(lien_thong > lien_thong_final)
	            cout << canh[i].first << ' ' << canh[i].second <<' ';
	 
	    }
	    cout<<endl;
	}
    return 0;
}
