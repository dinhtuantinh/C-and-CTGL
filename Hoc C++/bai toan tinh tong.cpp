#include<bits/stdc++.h>
using namespace std;
//void tong(string a,string b){
//	string tmp="";
//		int nho=0,so=0;
//		while(a.size()<b.size()) a='0'+a;
//		while(a.size()>b.size()) b='0'+b;
//		for(int i=a.size()-1;i>=0;i--){
//			so=int(a[i]-'0')+int(b[i]-'0')+nho;
//			tmp=char(so%10+'0')+tmp;
//			nho=so/10;
//		}
//		if(nho>0) tmp=char(nho+'0')+tmp;
//		cout<<tmp<<" ";
//}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		//int f[26]={};
		for(int i=0;i<s1.size();i++){
			if(s1[i]=='6') s1[i]='5';
		}
		for(int i=0;i<s2.size();i++){
			if(s2[i]=='6') s2[i]='5';
		}
		long long sum1=0,sum2=0;
		for(int i=0;i<s1.size();i++){
			sum1=sum1*10+s1[i]-'0';
		}
		for(int i=0;i<s2.size();i++){
			sum2=sum2*10+s2[i]-'0';
		}
		cout<<sum1+sum2<<" ";
		//tong(s1,s2);
		for(int i=0;i<s1.size();i++){
			if(s1[i]=='5') s1[i]='6';
		}
		for(int i=0;i<s2.size();i++){
			if(s2[i]=='5') s2[i]='6';
		}
//		tong(s1,s2);
//		cout<<endl;
		sum1=0;sum2=0;
		for(int i=0;i<s1.size();i++){
			sum1=sum1*10+s1[i]-'0';
		}
		for(int i=0;i<s2.size();i++){
			sum2=sum2*10+s2[i]-'0';
		}
		cout<<sum1+sum2<<endl;
	}
	return 0;
}


