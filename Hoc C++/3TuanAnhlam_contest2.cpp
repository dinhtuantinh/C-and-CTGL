#include<bits/stdc++.h>

using namespace std;
void ngan(){
		int n;
		cin>>n;
		priority_queue<long long,vector<long long>,greater<long long> > anh;
		long long value;
		for(int j=0;j<n;j++){
			cin>>value;
			anh.push(value);
		}
		long long kq=0;
		while(anh.size()>1){
			long long x=anh.top();anh.pop();
			long long y=anh.top();anh.pop();
			anh.push(x+y);
			kq+=x+y;
		}
		cout<<kq<<'\n';
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ngan();
	}
	return 0;
}

