//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//vector<string> res;
//int a[100][100];
//bool kt=false;
//void Quay_lui(int n, int i, int j, string s){
//	if(j==n&&a[n][n]&&i==n){
//		res.push_back(s);
//		kt=true;
//		return;
//	}
//	if(i==1&&j==1&&a[i][j]==0){
//		kt=false;
//		return;
//	}
//	if(a[i][j+1]&&j<n){
//		Quay_lui(n,i,j+1,s+"R");
//	}
//	if(a[i+1][j]&&i<n){
//		Quay_lui(n,i+1,j,s+"D");
//	}
//	if((i<n&&j<n&&!a[i+1][j]&&a[i][j+1]) || j>n||i>n){
//		return;
//	}
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=n;j++){
//				cin>>a[i][j];
//			}
//		}
//		kt=false;
//		res.clear();
//		Quay_lui(n,1,1,"");
//		if(kt==1){
//			sort(res.begin(),res.end());
//			for(int i=0;i<res.size();i++){
//				cout<<res[i]<<" ";
//			}
//		}
//		else{
//			cout<<"-1";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
vector<string> res;
int a[100][100];
//int n;
bool kt;
void Try(int n,int i,int j,string s){
	if(j==n&&a[n][n]&&i==n){
		res.push_back(s);
		kt=true;
		return;
	}
	if(i==0&&j==0&&a[i][j]==0){
		kt=false;
		return;
	}
	if(i<n&&a[i+1][j]==1){
		Try(n,i+1,j,s+'D');
	}
	if(j<n&&a[i][j+1]==1){
		Try(n,i,j+1,s+'R');
	}
	if((i<n&&j<n&&!a[i+1][j]&&a[i][j+1])||i>n||j>n) return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		kt=false;
		res.clear();
		sort(res.begin(),res.end());
		Try(n,1,1,"");
		if(kt==1){
			sort(res.begin(),res.end());
			for(int i=0;i<res.size();i++){
				cout<<res[i]<<" ";
			}
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

























