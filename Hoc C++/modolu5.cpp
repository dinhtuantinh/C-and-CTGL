#include<bits/stdc++.h>
using namespace std;
long long modulo(string s, long long a, int l){
	long long b=0;
	int i=0;
	while(i<l){
		b=(b*10+s[i]-'0')%a;
		i++;
	}
	return b;
}
int main(){
	string s,h;
	long long a;
	int n,l,i,j;
	cin>>n;
	while(n--){
		cin>>s;
		cin>>a;
		l=s.size();
		cout<<modulo(s,a,l)<<endl;
	}
	return 0;
}
