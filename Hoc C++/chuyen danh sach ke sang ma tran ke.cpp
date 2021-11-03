//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//int a[1001][1001]={};
//void slove(int n){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++)
//			cout<<a[i][j]<<" ";
//		cout<<endl;
//	}
//}
//void add(string s,int x,int n){
//	for(int i=0;i<s.size();i++){
//		int d=0;
//		while(isdigit(s[i])){
//			d=d*10+s[i]-'0';
//			i=i+1;
//		}
//		if(d<n&&d>0){
//			a[x][d-1]=1;
//			a[d-1][x]=1;
//		}
//	}
//}
//int main(){
//	int t;
//	cin>>t;
//	cin.ignore();
//	for(int i=0;i<t;i++){
//		string s="";
//		while(s==""){
//			getline(cin,s);
//		}
//		add(s,i,t);
//	}
//	slove(t);
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> ke[1001];
	cin.ignore();
	for(int i=1; i<=n; i++){
		string s;
		getline(cin, s);
        stringstream ss(s);
        string word;
        while(ss >> word){
			int so=0;
			for(int i=0; i<word.size(); i++){
				so=so*10+int(word[i]-'0');
			}
        	ke[i].push_back(so);
		}    
	}
	int a[n+1][n+1];
	for(int i=0; i<n+1; i++){
		for(int j=0; j<n+1; j++){
			a[i][j]=0;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=0; j<ke[i].size(); j++)
		{
			int x=ke[i][j];
			a[i][x]=1;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<a[i][j]<<' ';
		}
		cout<<'\n';
	}
    return 0;
}
