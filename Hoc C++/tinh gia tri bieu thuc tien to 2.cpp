#include<bits/stdc++.h>
using namespace std;
void xuat();
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		xuat();
	}
	return 0;
}
void xuat(){
	string s;
		cin>>s;
		stack<int> stk;
		for(int i=s.length()-1; i>=0; i--){
			if(s[i]>='0' && s[i]<='9')
				stk.push(s[i]-'0');
			else{
				if(s[i]=='+'){
						int x=stk.top();
						stk.pop();
						int y=stk.top();
						stk.pop();
						stk.push(x+y);
						break;
					}
				if(s[i]=='-'){
						int x=stk.top();
						stk.pop();
						int y=stk.top();
						stk.pop();
						stk.push(x-y);
						break;
					}
				if(s[i]=='*'){
						int x=stk.top();
						stk.pop();
						int y=stk.top();
						stk.pop();
						stk.push(x*y);
						break;
					}
				if(s[i]=='/'){
						int x=stk.top();
						stk.pop();
						int y=stk.top();
						stk.pop();
						stk.push(x/y);
						break;
					}
				
			}
		}
		cout<<stk.top()<<endl;
}
