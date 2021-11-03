#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int q;
	cin>>q;
	string s;
	int n;
	stack<int > stk;
	while(q--){
		cin>>s;
		if(s=="PUSH"){
			cin>>n;
			stk.push(n);
		}
		else if(s=="PRINT"){
			if(stk.size()==0){
				cout<<"NONE"<<endl;
			}
			else{
				cout<<stk.top()<<endl;
			}
		}
		else if(s=="POP"){
			if(stk.size()>0){
				stk.pop();
			}
		}
		cout<<endl;
	}
	return 0;
}

