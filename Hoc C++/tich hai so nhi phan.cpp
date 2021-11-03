#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		int n=s1.length();
		long long n1=0, n2=0;
		for(int i=0; s1[i]; i++)
			if(s1[i]=='1') n1+=pow(2, n-i-1);
		n=s2.length();
		for(int i=0; s2[i]; i++)
			if(s2[i]=='1') n2+=pow(2, n-i-1);	
		cout<<n1*n2<<endl;
	}
	return 0;
}
