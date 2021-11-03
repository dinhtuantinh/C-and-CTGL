#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int res4 = 0, res7 = 0;
		while(1){
			if(n%7==0){
				res7 += n/7;
				n = 0;
				break;
			}
			if(n>=4){
				n -= 4;
				res4++;
			}
			if(n < 4) break;
		}
		if(n != 0) cout<<"-1";
		else{
			if(res4 != 0){
				for(int i=1; i<=res4; i++) cout<<"4";
			}
			if(res7 != 0){
				for(int i=1; i<=res7; i++) cout<<"7";
			}
		}
		cout<<endl;
	}
	return 0;
}
