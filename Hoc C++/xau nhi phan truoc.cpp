#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool check=false;
		for(int i=0; i<s.size();i++){
			if(s[i]=='1'){
				check=true;
				break;
			}
		}
		if(check==false){
			for(int i=0; i<s.size(); i++)  cout<<'1';
		}
		else{
			for(int i=s.size()-1; i>=0; i--){
				if(s[i]=='1'){
					s[i]='0';
					for(int j=i+1; j<s.size(); j++) s[j]='1';
					break;
				}
			}
			for(int i=0; i<s.size(); i++) cout<<s[i];
		}cout<<endl;
		
	}
    return 0;
}
