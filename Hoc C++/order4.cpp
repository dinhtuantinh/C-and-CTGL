#include<bits/stdc++.h>

using namespace std;
long long Kiem_tra(int a[],int n){
	long long incl=a[0];
	long long excl=0;
	long long excl_new;
	for(int i=1;i<n;i++){
		excl_new=max(incl,excl);
		incl=excl+a[i];
		excl=excl_new;
	}
	return max(incl,excl);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<Kiem_tra(a,n)<<endl;
	}
	return 0;
}


