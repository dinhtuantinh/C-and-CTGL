#include<bits/stdc++.h>
using namespace std;
int tongChuSo(long long n){
	int s=0;
	while(n>0){
		int i=n%10;
		n/=10;
		s+=i;
	}
	if(s>9) return tongChuSo(s);
	else return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=0;
		for(int i=0; i<s.size(); i++){
			n=n+(s[i]-'0');
		}
		int k=tongChuSo(n);
		if(k==9) cout<< 1 <<endl;
		else cout<< 0 <<endl;
	}
    return 0;
}
