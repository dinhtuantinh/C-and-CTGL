#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	queue<int > q;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int x;
			cin>>x;
			q.push(x);
		}
		if(s=="PRINTFRONT"){
			if(q.size()==0) cout<<"NONE";
			else cout<<q.front();
		}
		if(s=="POP"){
			if(q.size()>0) q.pop();
			else continue;
		}
		cout<<endl;
	}
	return 0;
}

