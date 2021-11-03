#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> stk;
		for(int i=0; s[i]; i++){
			if(s[i]=='(')
				stk.push(s[i]);
			else if(!stk.empty() && stk.top()=='(')
				stk.pop();
			else stk.push(s[i]);
		}
		int x=0;
		while(!stk.empty() && stk.top()=='('){
			stk.pop();
			x++;
		}
		int y=stk.size();
		cout<<(x+y)/2+x%2<<endl;
	}
	return 0;
}

