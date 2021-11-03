#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		bool f[n][n];
		for(int i=0; i<n; i++)
			f[i][i]=true;
		int res=1;
		int i, j, k;
		for(k=1; k<n; k++){
			for(i=0; i<n-k; i++){
				j=i+k;
				if(s[i]==s[j]){
					if(k==1) f[i][j]=true;
					else f[i][j] = f[i+1][j-1];
				}
				else{
					f[i][j]=false;
				}
				if(f[i][j]) res=max(res, j-i+1);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

