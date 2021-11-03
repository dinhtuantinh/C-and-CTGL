#include<bits/stdc++.h>

using namespace std;

int main(){
	char *str=new char[255];
	cout<<"Moi thim nhap mot chuoi:";
	gets(str);
	int n=strlen(str);
	for(int i=0;i<n;i++){
		char c=*(str+i);
		int ascii=(int)c;
		cout<<c<<"=>"<<ascii<<endl;
	}
	return 0;
}


