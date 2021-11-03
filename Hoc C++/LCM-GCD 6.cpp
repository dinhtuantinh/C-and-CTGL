#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(!a)	return b;
	return gcd(b%a,a);
}
int co_Prime(int n, int m){
	int x,y;
	if((n-m)%2!=0) return false;
	x=(n-m)/2;
	y=m+x;
	if(gcd(x,y)==1) return true;
	else return false;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n,m;
		cin>>n>>m;
		n=(n*(n+1))/2;
		if(co_Prime(n,m)){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}


