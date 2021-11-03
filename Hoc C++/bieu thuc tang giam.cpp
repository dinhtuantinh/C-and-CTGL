#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void slove(string s){
	stack<int> st;
	int max=1;
	st.push(max);
	for(int i=0;i<s.size();i++){
		if(s[i]=='D'){
			st.push(++max);
		}
		else if(s[i]=='I'){
			while(!st.empty()){
				cout<<st.top();
				st.pop();
			}
			st.push(++max);
		}
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		slove(s);
	}
	return 0;
}

