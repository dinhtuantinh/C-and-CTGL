#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	t=1;
	while(t--){
		long long n;
		long long val;
		priority_queue<long long,vector<long long>, greater<long long> > a;
		cin>>n;
		for(long long i=0;i<n;i++){
			cin>>val;
			a.push(val);
		}
		long long res=0;
		while(a.size()>1){
			long long x=a.top();a.pop();
			long long y=a.top();a.pop();
			long long tmp=(x+y)%mod;
			a.push(tmp);
			res+=tmp;
			res%=mod;
		}
		cout<<res<<endl;
	}
	return 0;
}

