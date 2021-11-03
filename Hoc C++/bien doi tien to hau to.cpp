#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> stk;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='-'||s[i]=='+'||s[i]=='*'||s[i]=='%'||s[i]=='/'||s[i]=='^'){
				string x=stk.top();stk.pop();
				string y=stk.top();stk.pop();
				string tmp=x+y+s[i];
				stk.push(tmp);
			}
			else stk.push(string(1,s[i]));
		}
		cout<<stk.top()<<endl;;
	}
	return 0;
}

