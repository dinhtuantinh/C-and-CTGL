#include<bits/stdc++.h>
using namespace std;
void res();
int main(){
	int t;
	cin>>t;
	for(int x=t;x>=1;x--){
		res();
	}
	return 0;
}
void res(){
	string s;
		cin>>s;
		int n=s.size();
		bool ck[n][n];
		for(int i=0; i<n; i++)
			ck[i][i]=true;
		int kq=1;
		int i, j, k;
		for(k=1; k<n; k++){
			for(i=0; i<n-k; i++){
				j=i+k;
				if(s[i]!=s[j]){
					ck[i][j]=false;
				}
				else{
					if(k==1) ck[i][j]=true;
					else ck[i][j] = ck[i+1][j-1];
				}
				if(ck[i][j]) kq=max(kq, j-i+1);
			}
		}
		cout<<kq<<endl;
}
