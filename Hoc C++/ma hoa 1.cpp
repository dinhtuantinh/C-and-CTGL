#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int dem=1;
		//stack<string> res;
		for(int i=0;i<s.size();i++){
			//dem[s[i]]++;
			//dem=0;
			if(s[i+1]==s[i]) dem++;
			else{
				cout<<dem<<s[i];
				dem=1;
			}
		}
		cout<<endl;
		//for(int i=0;i<s.size();i++)
	}
	return 0;
}

