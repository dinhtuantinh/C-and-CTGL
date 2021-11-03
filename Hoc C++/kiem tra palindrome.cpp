#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int palindrome(char s[], int n){
	if(n<1) return 1;
	else if(s[0]!=s[n]) return 0;
	else return palindrome(s+1,n-2);
}

int main(){
	char s[100];
	cin.getline(s,100);
	int k=palindrome(s,strlen(s)-1);
	if(k==0) cout<<"No";
	else cout<<"Yes";
	return 0;
}

