#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> stk;
		for(int i=0;i<s.size();i++){
			char kq;
			if(s[i]>'0'&&s[i]<='9'){
				int check=int (s[i]-'0');
				for(int i=1;i<=check;i++) cout<<kq;
				
			}
			else kq=s[i];
		}
		
		cout<<endl;
	}
	return 0;
}

