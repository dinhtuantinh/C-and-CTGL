#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> stk;
		for(int i=s.length()-1; i>=0; i--){
			if(s[i]>='0' && s[i]<='9')
				stk.push(s[i]-'0');
			else{
				switch(s[i]){
					case '+':{
						int x=stk.top();
						stk.pop();
						int y=stk.top();
						stk.pop();
						stk.push(x+y);
						break;
					}
					case '-':{
						int x=stk.top();
						stk.pop();
						int y=stk.top();
						stk.pop();
						stk.push(x-y);
						break;
					}
					case '*':{
						int x=stk.top();
						stk.pop();
						int y=stk.top();
						stk.pop();
						stk.push(x*y);
						break;
					}
					case '/':{
						int x=stk.top();
						stk.pop();
						int y=stk.top();
						stk.pop();
						stk.push(x/y);
						break;
					}
				}
			}
		}
		cout<<stk.top()<<endl;
	}
	return 0;
}

