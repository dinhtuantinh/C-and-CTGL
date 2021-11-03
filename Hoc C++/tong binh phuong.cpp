#include<bits/stdc++.h>
using namespace std;

int f[10005];

int main(){
	f[0] = 0;
	f[1] = 1;
	f[2] = 2;
	f[3] = 3;
	for(int i=4; i<=10000; i++){
		f[i] = i;
		for(int j=1; j<=ceil(sqrt(i)); j++){
			int x = j*j;
			if(x > i) break;
			else f[i] = min(f[i], f[i-x]+1);
		}
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<f[n]<<endl;
	}
	return 0;
}

