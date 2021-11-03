#include<bits/stdc++.h>
using namespace std;
 
//vector< int > ke[100001];
bool check[100001];
// de quy
//void DFS(int u){
//	cout << u << ' ';
//	check[u] = true;
//	for(int i = 0 ; i< ke[u].size() ; i ++ ){
//		int v = ke[u][i];
//		if(check[v] == false){
//			DFS(v);
//		}
//	}
//}
// void DFS_STACK(int u){
// 	stack<int> stk;
// 	stk.push(u);
// 	while(stk.size()>0){
// 		int top=stk.top();stk.pop();
// 		check[top]=true;
// 		cout<<top<<" ";
// 		for(int i=0;i<ke[top].size();i++){
// 			int v=ke[top][i];
// 			if(check[v]==false){
// 				stk.push(v);
// 				check[v]=true;
//			}
//		}
//	}
//}
int main(){
 	int t;
 	cin>>t;
 	while(t--){
//		memset(check,false,sizeof(check));
//		ke->clear();
		int dinh, canh;
		cin >> dinh >> canh; 
	 	vector< int > ke[100001];
		for(int i=0;i<canh;i++){
			int u, v;
			// u -> v 
			cin >> u >> v; 
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		 for(int i = 1; i <= dinh ; i ++ )
		 {
		 	cout << i << ":";
		 	sort(ke[i].begin(),ke[i].end());
		 	for(int j=0;j<ke[i].size(); j ++ )
		 		cout <<' '<<ke[i][j];
		 	cout << endl;
		 }
		//DFS(1);
		//DFS_STACK(1);
		cout<<endl;
	}
	return 0;
}
