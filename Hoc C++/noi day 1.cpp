#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
priority_queue<long long,vector<long long>,greater<long long> > a;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		priority_queue<long long,vector<long long>,greater<long long> > a;
		long long v;
		for(int i=0;i<n;i++){
		cin>>v;
		a.push(v);
	}
		long long kq=0;
		while(a.size()>1){
			long long x=a.top();a.pop();
			long long y=a.top();a.pop();
			a.push(x+y);
			kq+=x+y;
		}
		cout<<kq<<endl;
	}
	return 0;
}
