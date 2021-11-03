#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
bool kt1(string s){
	int n=s.size();string x="";
	for(int i=0;i<n;i++){
		if(s[i]%2!=0) return false;
	}
	for(int i=n-1;i>=0;i--){
		x+=s[i];
	}
	if(s==x) return true;
	else return false;
}
bool kt2(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9') return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(kt1(s)&&kt2(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
		
	}
	return 0;
}

