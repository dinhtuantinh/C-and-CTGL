#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		priority_queue<int > q;
		int d[100]={0};
		int k;
		cin>>k;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			d[s[i]]++;
		}
		for(int i=0;i<100;i++){
			if(d[i]>0){
				q.push(d[i]);
			}
		}
		while(k>0&&q.size()>0){
			int top=q.top();q.pop();
			top-=1;
			if(top>0){
				q.push(top);
			}
			k-=1;
		}
		long long kq=0;
		while(q.size()>0){
			int top=q.top();q.pop();
			kq=kq+1ll*top*top;
		}
		cout<<kq<<endl;
	}
	return 0;
}

