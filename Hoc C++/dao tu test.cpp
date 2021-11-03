#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<int> stk;
		string x="";
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]==' '){
				while(!stk.empty()){
					x.push_back(stk.top());
					stk.pop();
				}
				x.push_back(s[i]);
			}
			else{
				stk.push(s[i]);
			}
		}
		while(!stk.empty()){
			x.push_back(stk.top());
			stk.pop();
		}
		cout<<x<<endl;
	}
	return 0;
}

