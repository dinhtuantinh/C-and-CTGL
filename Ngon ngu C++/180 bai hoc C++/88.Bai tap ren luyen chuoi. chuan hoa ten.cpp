#include<bits/stdc++.h>

using namespace std;
//chuan hoa ten
void XoaKhoangTrang(char *str){
	int j=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]!=' ')
			str[j++]=str[i];
		else if(j>0&&str[i+1]!=' ')
			str[j++]=str[i];
	}
	if(str[j-1]==' ')
		str[j-1]='\0';
	else str[j]='\0';
}
char *LayTen(char *str){
	int k=0;
	for(int i=strlen(str);i>=0;i--){
		if(str[i]==' '){
			k=i+1;
			break;
		}
	}
	char *strTen=new char[100];
	int i2=0;
	for(int i=k;i<strlen(str);i++){
		strTen[i2++]=str[i];
	}
	return strTen;
}
int main(){
	char *str=new char[255];
	strcpy(str,"        Dinh Tuan    Tinh     ");
	cout<<"Chuoi ban dau: "<<str<<endl;
	cout<<"Chieu dai = "<<strlen(str)<<endl;
	XoaKhoangTrang(str);
	cout<<"Chuoi sau khi xoa khoang trang: "<<str<<endl;
	cout<<"Chieu dai = "<<strlen(str)<<endl;
	char *ten=LayTen(str);
	cout<<"Ten = "<<ten<<endl;
	return 0;
}


