#include<bits/stdc++.h>

using namespace std;

int main(){
	char str1[25], str2[25];
	cout<<"Nhap chuoi 1:";
	gets(str1);
	cout<<"Chuoi 2:";
	strcpy(str2,str1);
	cout<<str2<<endl;
	
	char str3[6];
	strncpy(str3,str1,4);
	cout<<"Chuoi 3:\n"<<str3<<endl;
	
	return 0;
}


