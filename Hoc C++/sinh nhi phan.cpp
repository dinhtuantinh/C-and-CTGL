#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
//int a[100],n,stop=0;
//void init(){
//	for(int i=0;i<n;i++){
//		a[i]=0;
//	}
//}
//void xuat(){
//	for(int i=0;i<n;i++){
//		cout<<a[i];
//	}
//	cout<<endl;
//}
//void sinh_nhi_phan(){
//	int i=n-1;
//	while(i>=0&&a[i]==1){
//		//a[i]=0;
//		i--;
//	}
//	if(i>=0){
//		a[i]=1;
//		for(int j=i+1;j<n;j++){
//			a[j]='0';
//		}
//		
//	}
//	else{
//		for(int i=0;i<n;i++){
//			a[i]=0;
//		}
//	}
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		sinh_nhi_phan();
//		xuat();
//	}
//	return 0;
//}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i=s.size()-1;
		while(i>=0&&s[i]=='1'){
			i--;
		}
		if(i>=0){
			s[i]='1';
			for(int j=i+1;j<s.size();j++){
				s[j]='0';
			}
			cout<<s<<endl;
		}
		else{
			for(int j=0;j<s.size();j++){
				s[j]='0';
			}
			cout<<s<<endl;
		}
	}
}
