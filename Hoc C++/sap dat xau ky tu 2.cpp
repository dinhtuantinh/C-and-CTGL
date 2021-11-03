#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int d;
		bool ok=true;
		cin>>d>>s;
		int fre[26];
		int n=s.size();
		int str[n];
		memset(fre, 0, sizeof(fre));
		memset(str, 0, sizeof(str));
		for(int i=0; s[i]; i++)
			fre[s[i]-'A']++;
		sort(fre, fre+26, greater<int>());
		for(int i=0; fre[i]!=0; i++){
			int p=i;
			while(str[p]!=0) p++;
			for(int k = 0; k<fre[i]; k++){ 
	            if (p + d*k >= n) { 
	                ok=false;
	                break;
	            } 
	            str[p + d*k] = fre[i]; 
	        }
	        if(!ok) break;
		}
		if(ok) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
