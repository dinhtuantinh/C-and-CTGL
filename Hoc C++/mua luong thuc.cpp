//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n,s,m;
//		cin>>n>>s>>m;
//		if(s*m<=(s-s/7)*n){
//			for(int i=1;i<=s-s/7;i++){
//				if(n*i>=s*m){
//					cout<<i;
//					break;
//				}
//			}
//		}
//		else{
//			cout<<"-1";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,m;
		cin>>n>>s>>m;
		if(s*m<=(s-s/7)*n){
			for(int i=1;i<=s-s/7;i++){
				if(n*i>=s*m){
					cout<<i;
					break;
				}
			}
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
	}
}
