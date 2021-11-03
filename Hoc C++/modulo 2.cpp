//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int T,a,m,i;
//	cin>>T;
//	while(T--){
//		cin>>a>>m;
//		i=0;
//		while(i*a%m!=1&&i<m) i++;
//		if(i!=m) cout<<i<<endl;
//		else cout<<-1<<endl;
//	}
//	return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m,i;
		cin>>a>>m;
		i=0;
		while(i*a%m!=1&&i<m) i++;
		if(i!=m) cout<<i<<endl;
		else cout<<-1<<endl;
	}
	return 0;
} 
