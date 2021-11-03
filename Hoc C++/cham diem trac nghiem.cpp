#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int ma;cin>>ma;
		float count=0;
		cin.ignore();
		string s;
		getline(cin,s);
		string s1="";
		//int j=0;
		for(int i=0;i<s.size();i++){
			if(s[i]<='Z'&&s[i]>='A') {
				s1+=s[i];
			}
		}
		string de1="ABBADCCABDCCABD";
		string de2="ACCABCDDBBCDDBB";
		if(ma==101){
			for(int i=0;i<15;i++){
				if(s1[i]==de1[i]) count++;
			}
		}
		if(ma==102){
			for(int i=0;i<15;i++){
				if(s1[i]==de2[i]) count++;
			}
		}
		printf("%.2f\n", count*10/15);
	}
	return 0;
}

