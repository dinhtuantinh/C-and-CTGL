#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;cin>>n;
	int a[n+2];
	for(int i=0; i<n; i++) cin>>a[i];
	cin>>x;
	vector<int>kq;
	for(int i=0; i<n; i++){
		if(a[i]==x) continue;
		else kq.push_back(a[i]);
	}
	for(int i=0; i<kq.size(); i++) cout<<kq[i]<<' ';
    return 0;
}
