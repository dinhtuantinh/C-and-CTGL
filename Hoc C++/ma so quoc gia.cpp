#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		string k="084";
		int pos=s.find(k);
		s.erase(pos,k.size());
		cout<<s<<endl;
	}
	return 0;
}

