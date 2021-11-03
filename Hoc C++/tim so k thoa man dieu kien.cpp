#include<bits/stdc++.h>
using namespace std;

bool ok(int n){
	vector<bool> used(6, false);
	while(n){
		if(n%10>5) return false;
		if(used[n%10]) return false;
		used[n%10]=true;
		n/=10;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int l, r;
		cin>>l>>r;
		int res=0;
		for(int i=l; i<=r; i++)
			if(ok(i)) res++;
		cout<<res<<endl;
	}
	return 0;
}

