#include<bits/stdc++.h>

using namespace std;

int main(){
	char s1[50];
	char s2[50];
	strcpy(s1,"Tuan Anh");
	strcpy(s2,"Tuan Tinh");
	int kq=strcmp(s1,s2);
	cout<<"Ket qua="<<kq<<endl;
	if(kq==0) cout<<"s1=s2"<<endl;
	else if(kq<0) cout<<"s1<s2"<<endl;
	else cout<<"s1>s2"<<endl;
	
	char s3[50],s4[50];
	strcpy(s3,"Cha me thoi doi an o bac");
	strcpy(s4,"Co chong ho hung cung nhu khong");
	int kq2=strncmp(s3,s4,1);
	if(kq2==0) cout<<"s3=s4";
	else if(kq2>0) cout<<"s3>s4";
	else cout<<"s3<s4";
	return 0; 
}


