#include<bits/stdc++.h>
//Dinh Tuan Tinh
//so loc phat
using namespace std;
bool check(string top,int n){
	if(top.size()>n) return false;
	//if(top.size()<n) return false;
	return true;
}
bool check1(string top,int n){
	if(top.size()==n) return true;
	
	return false;
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
			
			q.push(top+"6");
			q.push(top+"8");
		}
		//cout<<dem<<endl;
		vector<string> v;
		while(kq.size()){
			v.push_back(kq.front());
			kq.pop();
			//cout<<" ";
		}
		for(int i=0;i<v.size();i++){
			if(check1(v[i],n)){
				dem++;
			}
		}
		cout<<dem<<endl;
		for(int i=0;i<v.size();i++){
			if(check1(v[i],n)){
				cout<<v[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

