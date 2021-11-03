#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int ins, del, copy;
		cin>>n>>ins>>del>>copy;
		int f[n+1];
		f[1]=ins;
		for(int i=2; i<=n; i++)
			if(i%2==0)
				f[i]=min(f[i/2]+copy, f[i-1]+ins);
			else f[i]=min(f[(i+1)/2]+copy+del, f[i-1]+ins);
		cout<<f[n]<<endl;
	}
	return 0;
}

