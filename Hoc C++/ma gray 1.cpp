#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k=1;
		cin>>n;
		for(int i=1;i<=n;i++){
			k*=2;
		}
		string s[k+5];
		s[1]= "0";
		s[2]="1";
		if(n>1){
			int x=2;
			for(int i=2;i<=n;i++){
				int y=1;
				for(int j=1;j<=i;j++){
					y*=2;
				}
				for(int j=1;j<=x;j++){
					s[y-j+1]= "1" +s[j];
					s[j]= "0" +s[j];
				}
				x=y;
			}
		}
		for(int i=1;i<=k;i++){
			cout<<s[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
