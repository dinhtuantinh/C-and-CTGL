#include<bits/stdc++.h>

using namespace std;

int main(){
	char str[255];
	cout<<"Moi thim nhap mot chuoi:";
	cin.getline(str,255);
	for(int i=strlen(str)-1;i>=0;i--){
		cout<<str[i];
	}
	return 0;
}


