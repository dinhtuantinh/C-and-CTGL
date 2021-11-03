#include<bits/stdc++.h>
using namespace std;
int main(){
	long long b,dem, l, i;
	long long n,t, k;
	cin>>k;
	while(k--)
	{
		cin>>b>>n;
		l=b/n;
		b=b%n;
		t=0;
		for(i=1; i<=b; i++)	if(i*i%n==1) t++;
		dem=t;
		for(i=b+1; i<n; i++) if(i*i%n==1) t++;
		dem=dem+l*t;
		cout<<dem<<endl;
	}
    return 0;
}
