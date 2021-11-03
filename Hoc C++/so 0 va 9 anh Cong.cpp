#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
bool check(string top,int n){
	int so=0;
	for(int i=0;i<top.size();i++){
		so=so*10 + int(top[i] - '0');
		so%=n;
	}
	if(so==0) return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		queue<string> q;
		int n;
		cin>>n;
		q.push("9");
		while(q.size()>0){
			string top=q.front(); q.pop();
			if(check(top,n)){
				cout<<top<<endl;
				break;
			}
			else{
				q.push(top+"0");
				q.push(top+"9");
			}	
		}
		//cout<<endl;
	}
	return 0;
}

