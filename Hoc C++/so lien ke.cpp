#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int check=0;
		vector<int> v;
		for(int i=0;i<s.size();i++){
			v.push_back(s[i]-'0');
		}
		for(int i=0;i<v.size()-1;i++){
			if(abs(v[i+1]-v[i])!=1){
				cout<<"NO";
				check=1;
				break;
			}
		}
		if(check==0) cout<<"YES";
		cout<<endl;
	}
	return 0;
}

