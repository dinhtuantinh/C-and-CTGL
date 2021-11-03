#include<bits/stdc++.h>
using namespace std;
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
		sort(a,a+n);
		int L=a[0],R=a[n-1],check=0;
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]) check++;
		}
		cout<<R-L-n+1+check<<endl;
	}
	return 0;
}
