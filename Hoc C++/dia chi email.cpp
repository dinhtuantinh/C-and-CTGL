//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	string s="";
//	string s1;
//	getline(cin,s1);
//	for(long long i=s1.size()-1;i>=0;i--){
//		if(s1[i]>=65&&s1[i]<=90) s1[i]+=32;//bien cac ky tu in hoa sang thuong
//	}
//	long long k=0;
//	int kt=0;
//	for(long long i=s1.size()-1;i>=0;i--){
//		//duyet chuoi tu cuoi ve dau, tim vi tri khoang trang dau tien de chen @ vao
//		if(s1[i]!=' '&&s1[i-1]==' '){
//			k=i;
//			break;
//		}
//		else if(i==0) kt=1; k=i;//neu khong ton tai khoang trang nghia la ten chi co 1 tu(i chay ve 0)	
//	}
//	for(long long i=k;i<s1.size();i++) s+=s1[i];//lay duoc ten
//	if(kt==0) s+=s1[0];//lay duoc chu cai dau tien cua ten ho
//	for(long long i=0;i<k-1;i++){
//		if(s1[i]==' '&&s[i+1]!=' ') s+=s1[i+1];//ta se lay lan luot duoc chu cai dau tien cua moi tu
//	}
//	s+="@ptit.edu.vn";//chen them "@ptit.edu.vn" vao cuoi chuoi s
//	cout<<s<<endl;
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="";
	string s1;
	getline(cin,s1);
	for(long long i=s1.size()-1;i>=0;i--){
		if(s1[i]>=65&&s1[i]<=90) s1[i]+=32;
	}
	long long k=0;
	int kt=0;
	for(long long i=s1.size()-1;i>=0;i--){
		if(s1[i]!=' '&&s1[i-1]==' '){
			k=i;
			break;
		}
		else if(i==0) kt=1; k=i;
	}
	for(long long i=k;i<s1.size();i++) s+=s1[i];
	if(kt==0) s+=s1[0];
	for(long long i=0;i<k-1;i++){
		if(s1[i]==' '&&s[i+1]!=' ') s+=s1[i+1];
	}
	
	s+="@ptit.edu.vn";
	cout<<s<<endl;
	return 0;
}




























