#include<bits/stdc++.h>
using namespace std;

string remove(string s){
	string res="";
	stack<char> dau;
	dau.push('+');
	for(int i=0; s[i]; i++){
		if(s[i]=='-'){
			if(dau.top()=='+') res+="-";
			else res+="+";
		}
		else if(s[i]=='+'){
			if(dau.top()=='-') res+="-";
			else res+="+";
		}
		else if(s[i]=='('){
			if(i>0 && s[i-1]=='-'){
				if(dau.top()=='+') dau.push('-');
				else dau.push('+');
			}
		}
		else if(s[i]==')'){
			dau.pop();
		}
		else res+=(s.substr(i, 1));
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		string a=remove(s1), b=remove(s2);
		if(a.compare(b)==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

