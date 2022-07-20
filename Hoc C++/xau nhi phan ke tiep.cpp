#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i=s.size()-1;
		while(i>=0&&s[i]=='1'){
			i-=1;
		}
		if(i>=0){
			s[i]='1';
			for(int j=i+1;j<s.size();j++){
				s[j]='0';
			}
		}
		else{
			for(int j=0;j<s.size();j++){
				s[j]='0';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}


























