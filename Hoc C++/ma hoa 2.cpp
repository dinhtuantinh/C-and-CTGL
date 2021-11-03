#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		while(cin>>n){
			if(n!=0){
				string P="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
				string s;
				cin>>s;
				for(int i=0;i<=s.size()-1;i++){
					if(s[i]<='Z'&&s[i]>='A'){
						int a=(s[i]-'A'+n)%28;
						s[i]=P[a];
					}
					else if(s[i]=='_'){
						int a=(n+26)%28;
						s[i]=P[a];
					}
					else if(s[i]=='.'){
						int a=(n+27)%28;
						s[i]=P[a];
					}
				}
				//reverse(s.begin(),s.end());
				for(int i=s.size()-1;i>=0;i--){
					cout<<s[i];
				}
				cout<<endl;
			}
			else break;
		}
		
	//}
	return 0;
}

