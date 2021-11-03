#include<bits/stdc++.h>

using namespace std;

int main(){
	char str1[25];
	cout<<"Moi ban nhap chuoi:";
	gets(str1);
	cout<<"Chuoi sau khi nhap:\n";
	puts(str1);
	
	char *str2=new char[25];
	cout<<"nhap:";
	gets(str2);
	cout<<"xuat:\n";
	puts(str2);
	
	char str3[255];
	cout<<"Nhap:";
	cin.getline(str3,255);
	cout<<"xuat\n";
	cout<<str3<<endl;
	
	cout<<"Kich thuoc thu su ban nhap:"<<strlen(str3)<<endl;
	return 0;
}


