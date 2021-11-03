//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		string a,b;
//		int nho=0,so=0;
//		string tmp="";
//		cin>>a;
//		cin>>b;
//		while(a.size()<b.size()) a='0'+a;
//		while(a.size()>b.size()) b='0'+b;
//		for(int i=a.size()-1;i>=0;i--){
//			so=int (a[i]-'0')+int (b[i]-'0')+nho;
//			tmp=char(so%10+'0')+tmp;
//			nho=so/10;
//		}
//		if(nho>0) tmp=char(nho+'0')+tmp;
//		cout<<tmp<<endl;
//	}
//	return 0;
//} 
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		string a,b;
//		int nho=0,so=0;
//		string tmp="";
//		cin>>a>>b;
//		while(a.size()<b.size()) a='0'+a;
//		while(a.size()>b.size()) b='0'+b;
//		for(int i=a.size()-1;i>=0;i--){
//			so = int(a[i]-'0') + int(b[i]-'0') + nho; 
//			tmp=char(so%10+'0')+tmp;
//			nho=so/10;
//		}
//		cout<<tmp<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		string tmp="";
		int nho=0,so=0;
		while(a.size()<b.size()) a='0'+a;
		while(a.size()>b.size()) b='0'+b;
		for(int i=a.size()-1;i>=0;i--){
			so=int(a[i]-'0')+int(b[i]-'0')+nho;
			tmp=char(so%10+'0')+tmp;
			nho=so/10;
		}
		if(nho>0) tmp=char(nho+'0')+tmp;
		cout<<tmp<<endl;
	}
	return 0;
}









































