#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string k="";
		for(int i=s.size()-1;i>=0;i--){
			k=k+s[i];
		}
		if(k==s) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

