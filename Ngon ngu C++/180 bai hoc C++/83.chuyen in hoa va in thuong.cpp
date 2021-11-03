#include<bits/stdc++.h>

using namespace std;

int main(){
	char str1[]="OBAMA hahaha ali33";
	int n1=strlen(str1);
	for(int i=0;i<n1;i++){
		char c=str1[i];
		putchar(toupper(c));
	}
	cout<<"\n";
	char str2[]="DINH TUA TINH";
	int n2=strlen(str2);
	for(int i=0;i<n2;i++){
		char c=str2[i];
		putchar(tolower(c));
	}
	return 0;
}


