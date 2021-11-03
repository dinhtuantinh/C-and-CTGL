#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		queue<string> q;
		string n;
		cin>>n;
		int index=0;
		for(int i=0;i<n.size();i++){
			if(n[i]>'1'){
				index=i;
				break;
			}
		}
		if(index>-1){
			for(int i=index;i<n.size();i++)
				n[i]='1';
		}
		long long dem=0;
		int mu=1;
		for(int i=n.size()-1;i>=0;i--){
			if(n[i]=='1') dem=dem+mu;
			mu=mu*2;
		}
		cout<<dem<<endl;
	}
	return 0;
}

