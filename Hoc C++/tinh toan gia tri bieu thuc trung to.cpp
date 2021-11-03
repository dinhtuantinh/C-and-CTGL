#include<bits/stdc++.h>
using namespace std;

int bac(char c){
	switch(c){
		case '*':
		case '/': return 2;
		case '+':
		case '-': return 1;	
		default: return -1;
	}
}

string postfix(string s){
	string res="";
	stack<char> stk;
	stk.push('.');
	for(int i=0; s[i]; i++){
		if(s[i]>='0' && s[i]<='9')
			res+=s[i];
		else{
			if(s[i-1]>='0' && s[i-1]<='9')
				res+=" ";
			if(s[i]=='(')
				stk.push(s[i]);
			else if(s[i]==')'){
				while(stk.top()!='('){
					res+=stk.top();
					stk.pop();
				}
				stk.pop();
			}
			else{
				while(bac(stk.top()) >= bac(s[i])){
					res+=stk.top();
					stk.pop();
				}
				stk.push(s[i]);
			}
		}
	}
	while(stk.top()!='.'){
		res+=stk.top();
		stk.pop();
	}
	return res;
}

long long result(string s){
	stack<long long> stk;
	int i=0;
	while(s[i]){
		long long tmp=0;
		while(s[i]>='0' && s[i]<='9'){
			tmp=tmp*10+(s[i]-'0');
			i++;
		}
		if(s[i-1]>='0' && s[i-1]<='9') stk.push(tmp);
		if(s[i]==' ') i++;
		else{
			switch(s[i]){
				case '+':{
					long long y=stk.top();	stk.pop();
					long long x=stk.top();	stk.pop();
					stk.push(x+y);
					i++;
					break;
				}
				case '-':{
					long long y=stk.top();	stk.pop();
					long long x=stk.top();	stk.pop();
					stk.push(x-y);
					i++;
					break;
				}
				case '*':{
					long long y=stk.top();	stk.pop();
					long long x=stk.top();	stk.pop();
					stk.push(x*y);
					i++;
					break;
				}
				case '/':{
					long long y=stk.top();	stk.pop();
					long long x=stk.top();	stk.pop();
					stk.push(x/y);
					i++;
					break;
				}
			}
		}
	}
	return stk.top();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<result(postfix(s))<<endl;
	}
	return 0;
}

