#include<bits/stdc++.h>
using namespace std;
void slove();
int main(){
	int t;cin>>t;
	while(t--){
		slove();
	}
    return 0;
}
void slove(){
	string s;
	stack<long long>stk;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='+'||s[i]=='*'||s[i]=='-'||s[i]=='%'||s[i]=='/'||s[i]=='^'){
			long long s1=stk.top(); stk.pop();
			long long s2=stk.top(); stk.pop();
			long long x;
			if(s[i]=='+') x=s1+s2;
			else if(s[i]=='*') x=s2*s1;
			else if(s[i]=='-') x=s2-s1;
			else if(s[i]=='%') x=s2%s1;
			else if(s[i]=='/') x=s2/s1;
			else if(s[i]=='^') {
				x=s2;
				for(int l=0; l<s1; l++) x*=l;
			}
			stk.push(x);
		}
		else stk.push((long long)(s[i]-'0'));
	}
	cout<<stk.top()<<endl;
}
