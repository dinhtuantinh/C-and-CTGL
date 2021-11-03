#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int p=-1;
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]<s[i-1]){
				p=i-1;
				break;
			}
		}
		int q=-1;
		for(int i=s.length()-1;i>p;i--){
			if(s[i]<s[p]){
				if(q==-1) q=i;
				else if(s[i]>=s[q]) q=i;
			}
		}
		if(q==-1) cout<<q<<endl;
		else{
			swap(s[p], s[q]);
			cout<<s;
			cout<<endl;
		}
	}
	return 0;
}

