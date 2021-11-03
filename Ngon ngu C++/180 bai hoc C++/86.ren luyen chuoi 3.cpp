#include<bits/stdc++.h>

using namespace std;
void tachlaytrai(char *strGoc,char *&strDau,char *&strSau){
	char *p=strchr(strGoc,' ');
	int lSpace=p-strGoc;
	strncpy(strDau,strGoc,lSpace);
	p=p+1;
	strSau=p;
	//"Dinh Tuan Tinh"
}
void tachlayphai(char *strGoc,char *&strCuoi,char *&strTruoc){
	int j=0;
	for(int i=strlen(strGoc)-1;i>=0;i--){
		if(strGoc[i]==' '){
			j=i+1;
			break;
		}
	}
	int i2=0;
	for(int i2=j;i2<strlen(strGoc);i2++){
		strCuoi[i2]=strGoc[i2];
		i2++;
	}
	strncpy(strTruoc,strGoc,j-1);
}
int main(){
	char *strGoc=new char[255];
	strcpy(strGoc,"Dinh Tuan Tinh");
	char *strDau=new char[255];
	char *strSau=new char[255];
	tachlaytrai(strGoc,strDau,strSau);
	cout<<strDau<<endl;
	cout<<strSau<<endl;
	
	char *strCuoi=new char[255];
	char *strTruoc=new char[255];
	strcpy(strTruoc," ");
	strcpy(strCuoi," ");
	tachlayphai(strGoc,strCuoi,strTruoc);
	cout<<strCuoi<<endl;
	cout<<strTruoc<<endl;
	return 0;
}


