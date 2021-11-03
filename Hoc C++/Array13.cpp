#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream iff("inp.txt",ios::in);
	ofstream off("out.txt", ios::out);
	int t;
	iff>>t;
	while(t--){
		int na,nb;
		cin>>na>>nb;
		int a[na], b[nb];
		for(int i;i<na;i++){
			iff>>a[i];
		}
		for(int i=0;i<nb;i++){
			iff>>b[i];
		}
		map<int, int>mp;
		for(int i=0;i<na;i++){
			mp[a[i]]++;
		}
		for(int i=0;i<nb;i++){
			if(mp.find(b[i])!=mp.end()){
				while(mp[b[i]]--){
					off<<b[i]<<" ";
				}
				mp.erase(b[i]);
			}
		}
		for(auto (i:mp){
			while(i.second--){
				<<i.first<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}


