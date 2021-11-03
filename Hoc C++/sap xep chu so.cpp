#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){
				cout<<"0 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='1'){
				cout<<"1 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='2'){
				cout<<"2 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='3'){
				cout<<"3 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='4'){
				cout<<"4 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='5'){
				cout<<"5 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='6'){
				cout<<"6 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='7'){
				cout<<"7 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='8'){
				cout<<"8 ";
				break;
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='9'){
				cout<<"9 ";
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
