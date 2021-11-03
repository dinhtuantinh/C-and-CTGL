#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--){
//		int v,e;
//		cin>>v>>e;
//		int begin,end;
//		vector<vector<int> >list(v,vector<int>());
//		for(int i=0;i<e;i++){
//			
//			cin>>begin>>end;
//			list[begin-1].push_back(end);
//			list[end-1].push_back(begin);
//		}
//		for(int i=0;i<v;i++){
//			cout<<i+1<<": ";
//			for(int j=0;j<list[i].size();j++){
//				cout<<list[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		int v, e;
		cin>>v>>e;
		int begin,end;
		vector<vector<int> > list(v,vector<int>());
		for(int i=0;i<e;i++){
			cin>>begin>>end;
			list[begin-1].push_back(end);
			list[end-1].push_back(begin);
		}
		for(int i=0;i<v;i++){
			cout<<i+1<<": ";
			for(int j=0;j<list[i].size();j++){
				cout<<list[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

