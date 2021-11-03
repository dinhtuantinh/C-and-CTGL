#include<bits/stdc++.h>

using namespace std;

int main(){
	char str1[100],str2[100];
	strcpy(str1,"Dinh Tuan Anh");
	strcpy(str2," la anh cua Dinh Tuan Tinh.");
	strcat(str1,str2);
	puts(str1);
	char ho[50],ten[50],hovaten[100];
	cout<<"Nhap ho:";
	gets(ho);
	cout<<"Nhap ten:";
	gets(ten);
	strcpy(hovaten,"");
	strcat(hovaten,ho);
	strcat(hovaten," ");
	strcat(hovaten,ten);
	puts(hovaten);
	
	char str3[50],str4[50];
	strcpy(str3,"To be ");
	strcpy(str4,"Or Not To be");
	strncat(str3,str4,6);
	cout<<"\nChuoi sau khi noi la:\n";
	puts(str3);
	return 0;
}


