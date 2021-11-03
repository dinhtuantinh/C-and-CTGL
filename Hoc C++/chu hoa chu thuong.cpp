#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char s;
		cin>>s;
			if('A'<=s&&s<='Z'){
				int x=int(s)+32;
				cout<<char(x);
			}
			if('a'<=s&&s<='z'){
				int k=int(s)-32;
				cout<<char(k);
			}
		cout<<endl;
	}
	return 0;
}

