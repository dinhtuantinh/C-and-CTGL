#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int check=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='7'||s[i]=='9'){
				cout<<"NO";
				check=1;
				break;
			}
		}
		if(check==0) cout<<"YES";
		cout<<endl;
	}
	return 0;
}

