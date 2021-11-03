#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string s;
		stack<long long>stk;
		cin>>s;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
				long long s1=stk.top(); stk.pop();
				long long s2=stk.top(); stk.pop();
				long long tmp;
				if(s[i]=='+') tmp=s1+s2;
				else if(s[i]=='-') tmp=s2-s1;
				else if(s[i]=='*') tmp=s2*s1;
				else if(s[i]=='/') tmp=s2/s1;
				else if(s[i]=='%') tmp=s2%s1;
				else if(s[i]=='^') {
					tmp=s2;
					for(int l=0; l<s1; l++) tmp*=l;
				}
				stk.push(tmp);
			}
			else stk.push((long long)(s[i]-'0'));
		}
		cout<<stk.top()<<'\n';
	}
    return 0;
}
