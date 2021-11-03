#include<bits/stdc++.h>
//Dinh Tuan Tinh
//so loc phat
using namespace std;
bool check(string top,int n){
	if(top.size()>n) return false;
	else return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		queue<string>q;
		queue<string>kq;
		int n,dem=0;
		cin>>n;
		q.push("6");
		q.push("8");
		while(q.size()>0){
			string top=q.front();
			q.pop();
			if(!check(top,n)) break;
			kq.push(top);
			dem++;
			q.push(top+"6");
			q.push(top+"8");
		}
		cout<<dem<<endl;
		while(kq.size()){
			cout<<kq.front()<<" ";
			kq.pop();
			//cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

