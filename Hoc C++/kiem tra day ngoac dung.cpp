#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		stack<char> stk;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('||s[i]=='['||s[i]=='{'){
				stk.push(s[i]);
			}
			else if(s[i]==')'&&stk.size()>0&&stk.top()=='('){
				stk.pop();
			}
			else if(s[i]==']'&&stk.size()>0&&stk.top()=='['){
				stk.pop();
			}
			else if(s[i]=='}'&&stk.size()>0&&stk.top()=='{'){
				stk.pop();
			}
			else stk.push(s[i]);
		}
		if(stk.size()==0){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}

