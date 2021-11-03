#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
//	int t;
//	cin>>t;
//	cin.ignore();
//	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if(s[i]>'b'&&s[i]<='z'){
				s[i]=s[i]-2;
			}
			if(s[i]=='a'){
				s[i]='y';
			}
			if(s[i]=='b') s[i]='z';
			if(s[i]=='Y') s[i]='A';
			if(s[i]=='Z') s[i]='B';
			if(s[i]>='A'&&s[i]<'Y'){
				s[i]=s[i]+2;
			}
		}
		cout<<s<<endl;
//		for(int i=0;i<s.size();i++){
//			c
//		}
//	}
	return 0;
}

