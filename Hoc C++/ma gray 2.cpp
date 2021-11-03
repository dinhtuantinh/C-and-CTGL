#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string g, b="";
		cin>>g;
		b += g[0];
		for(int i = 1; i < g.size(); i++)
			if(b[i-1] != g[i]) b += "1";
			else b += "0";
		cout<<b<<endl;
	}
	return 0;
}

