#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	deque<int > q;
	while(t--){
		string s;int n;
		cin>>s;
		if(s=="PUSHFRONT"){	
			cin>>n;
			q.push_front(n);
		}
		if(s=="PRINTFRONT"){
			if(q.size()==0) cout<<"NONE";
			else cout<<q.front();
		}
		if(s=="POPFRONT"){
			if(q.size()>0){
				q.pop_front();
			}
			else continue;
		}
		if(s=="PUSHBACK"){
			cin>>n;
			q.push_back(n);
		}
		if(s=="PRINTBACK"){
			if(q.size()==0) cout<<"NONE";
			else cout<<q.back();
		}
		if(s=="POPBACK"){
			if(q.size()>0){
				q.pop_back();
			}
		}
		cout<<endl;
	} 
	return 0;
}

