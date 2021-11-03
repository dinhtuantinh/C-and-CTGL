#include<bits/stdc++.h>
using namespace std;
int x[22];
void Try(int n,int c,int k){
	int dem=0;
	for(int i=x[c-1]+1;i<=n-k+c;i++){
		x[c]=i;
		if(c==k){
			for(int j=1;j<=k;j++){
				cout<<x[j];
				dem++;
			}
			cout<<" ";
		}
		else Try(n,c+1,k);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		Try(n,1,k);
		cout<<endl;
	}
	return 0;
}


