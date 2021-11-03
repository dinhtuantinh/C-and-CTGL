#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string b, g="";
		cin>>b;
		g += b[0];
		for(int i = 1; i < b.size(); i++)
			if(b[i] != b[i-1]) g += "1";
			else g += "0";
		cout<<g<<endl;
	}
	return 0;
}

