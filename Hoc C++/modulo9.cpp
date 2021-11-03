#include<bits/stdc++.h>
#define modulo 1000000007
using namespace std;
int gcd_extend(int a,int b,int *x,int *y){
	if(b==0){
		*x=1;
		*y=0;
		return a;
	}
	int x1,y1;
	int gcd=gcd_extend(b,a%b,&x1,&y1);
	*x=y1;
	*y=x1-(a/b)*y1;
	return gcd;
}
int modulo_inverse_euclidean(int n,int m){
	int x,y;
	if(gcd_extend(n,m,&x,&y)!=1) return -1;
	return (x%m+m)%m;
}
int main(){
	int t,a,b,dem,i;
	long long tu,mau,z;
	cin>>t;
	while(t--){
		cin>>a>>b;
		tu=1;
		mau=1;
		for(i=b+1;i<=a;i++){
			tu=(tu*i)%modulo;
		}
		z=a-b+1;
		for(i=2;i<z;i++){
			mau=(mau*i)%modulo;
		}
		z=modulo_inverse_euclidean(mau,modulo);
		cout<<(tu*z)%modulo;
		cout<<endl;
	}
	return 0;
}


