#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
//int t[1001][1001];
//int main(){
//	int x;
//	cin>>x;
//	cin.ignore();
//	while(x--){
//		string s1,s2;
//		cin>>s1>>s2;
//		int res=0;
//		memset(t,0,sizeof(t));
//	//	int m=s1.size(), n=s2.size();
//		
//		for(int i=1;i<=s1.size();i++){
//			for(int j=1;j<=s2.size();j++){
//				if(s1[i-1]==s2[j-1]) t[i][j]=t[i-1][j-1]+1;
//				else t[i][j]=max(t[i-1][j],t[i][j-1]);
//				res=max(res,t[i][j]);
//			}
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}
int d[1001][1001];
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		memset(d,0,sizeof(d));
		for(int i=0;i<=s1.size();i++){
			d[i][0]=0;
		}
		for(int j=0;j<=s1.size();j++){
			d[0][j]=0;
		}
		for(int i=1;i<=s1.size();i++){
			for(int j=1;j<=s2.size();j++){
				if(s1[i-1]==s2[j-1]){
					d[i][j]=max(d[i][j],d[i-1][j-1]+1);
				}
				else{
					d[i][j]=max(d[i-1][j],d[i][j-1]);
				}
			}
		}
		cout<<d[s1.size()][s2.size()]<<endl;
	}
	return 0;
}
//s1=AGGTAB
//s2=GXTXAYB
//i=1
//	s1[0]=s2[4]->d[0][4]=1;
//	
//i=2
//	s1[1]=s2[0]->d[1][0]=1;
	
	

















