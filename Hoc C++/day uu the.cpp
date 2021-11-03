#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int chuyen(string s){
	int a;
	for(int i=0;i<s.size();i++){
		a=a*10+s[i]-'0';
	} 
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin,s);
		int demchan=0,demle=0;
		vector<int> res;
		s+=' ';
		int x;
		for(int i=0;i<s.size();i++){
			if(s[i]!=' '){
				x=x*10+s[i]-'0';
			} 
			else res.push_back(x);
		}
		
		for(int i=0;i<res.size();i++){
			if(res[i]%2==0) demchan++;
			else demle++;
		}
		if((res.size()%2==0&&demchan>demle)||(res.size()%2!=0&&demle>demchan)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

