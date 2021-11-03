#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

string xuat(int n);
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<xuat(n)<<endl;
	}
	return 0;
}
string xuat(int n){
	queue<string> q;
	
	q.push("9");
	while(q.size()>0){
		string kq = q.front(); q.pop();
		long long x=0;
		for(int i=0;i<kq.size();i++){
			x=10* x+(int)( kq[i]-'0');
			x%=n;
		}
		if(x==0){
			return kq;
		}
		q.push(kq+"9");q.push(kq +"0");
	}
}
