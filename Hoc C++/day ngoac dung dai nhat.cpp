#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int kq=0;
		stack<int > stk;
		stk.push(-1);
		for(int i=0;i<n;i++){
			if(s[i]=='(')
				stk.push(i);
			else{
				stk.pop();
				if(stk.size()>0)
					kq= max(kq,i-stk.top());
				if(stk.size()==0) stk.push(i);
			}
		}
		cout<<kq<<endl;
	}
	return 0;
}

