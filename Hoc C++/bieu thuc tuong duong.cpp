#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> dau;
		dau.push('+');
		for(int i=0; s[i]; i++){
			if(s[i]=='-'){
				if(dau.top()=='+') cout<<'-';
				else cout<<'+';
			}
			else if(s[i]=='+'){
				if(dau.top()=='-') cout<<'-';
				else cout<<'+';
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
			else cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}

