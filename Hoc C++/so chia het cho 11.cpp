#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int tongle=0,tongchan=0;
		for(int i=0;i<s.size();i++){
			if(i%2==0){
				tongle+=s[i]-'0';
			}
			else{
				tongchan+=s[i]-'0';
			}
		}
		if((tongle-tongchan)%11==0) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}

