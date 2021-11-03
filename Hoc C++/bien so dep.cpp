#include<bits/stdc++.h>
using namespace std;
int csgiong(string s){
	if(s[10]==s[9]&&s[7]==s[6]&&s[6]==s[5]){
		return 1;
	}
	return 0;
}
int solocphat(string s){
	for(int i=s.size()-1; i>=5; i--){	
		if(s[i]=='.'){
			continue;
		}
		if(s[i]!='6'&&s[i]!='8'){
			return 0;
		}
	}
	return 1;
}
int tangdan(string s){
	int count5=s[5]-'0';
	int count6=s[6]-'0';
	int count7=s[7]-'0';
	int count9=s[9]-'0';
	int count10=s[10]-'0';
	if(count5+1==count6&&count6+1==count7&&count7+1==count9&&count9+1==count10){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=csgiong(s)+solocphat(s)+tangdan(s);
		if(count==0){
			cout<<"NO";
		}
		else cout<<"YES";
		cout<<endl;
	}
    return 0;
}
