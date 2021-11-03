#include<bits/stdc++.h>

using namespace std;
bool snt(int n){
	if(n<2) return false;
	//if(n==2) return true;
	if(n>=2){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int L,R,x,y;
		cin>>L>>R;
		if(L>R){
			x=R;
			y=L;
		}
		if(L<R){
			x=L;
			y=R;
		}
		int dem=0;
		for(int i=x;i<=y;i++){
			if(snt(i)) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}


