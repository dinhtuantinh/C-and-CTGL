#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
string a, b;
string tong(){
	while(a.size()<b.size()) a="0"+a; 
	while(a.size()>b.size()) b="0"+b;
	int x=a.size();
	string kq="";
	int nho=0;
	for(int i=x-1;i>=0;i--){
		int s= int(a[i]-'0')+ int(b[i]-'0')+nho;
		kq=char(s %10+'0' )+ kq;
		nho=s / 10;
	}
	if(nho>0) return char(nho+'0')+kq;
	return kq;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
//	while(t--){
		cin>>a>>b;
		for(int i=0;i<a.size();i++){
			if(a[i]=='6') a[i]='5';
		}
		for(int i=0;i<b.size();i++){
			if(b[i]=='6') b[i]='5';
		}
		cout<<tong()<<" ";
		for(int i=0;i<a.size();i++){
			if(a[i]=='5') a[i]='6';
		}
		for(int i=0;i<b.size();i++){
			if(b[i]=='5') b[i]='6';
		}
		cout<<tong()<<endl;
//	}
	return 0;
}

