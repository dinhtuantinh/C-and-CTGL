//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//int n, a[100];
//vector<vector<int> > s; 
//bool check[100];
//void Try(int i){
//	for(int j=1;j<=n;j++){
//		
//		if(check[j]==false){
//			a[i]=j;
//			check[j]=true;
//			if(i==n){
//				vector<int> b;
//				for(int j=1;j<=n;j++){
//					b.push_back(a[j]);
//				}
//				s.push_back(b);
//			}
//			else{
//				Try(i+1);
//			}
//			check[j]=false;
//		}
//	}
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		s.clear();
//		memset(check,false,sizeof(check));
//		Try(1);
//		for(int i=s.size()-1;i>=0;i--){
//			for(int j=0;j<s.size();j++)
//				cout<<s[i][j];
//			cout<<" ";
//		}
//		cout<<endl;
//		
//	}
//	return 0;
//}
#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n,b[100];
vector <vector<int> > res;
bool ok[100];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!ok[j]){
			b[i]=j;
			ok[j]=true;
			if(i==n){
				vector<int> a;
				for(int j=1;j<=n;j++)
					a.push_back(b[j]);
				res.push_back(a);
			}
			else Try(i+1);
			ok[j]=false;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t; 
	cin>>t;
	while(t--){
		cin>>n;
		res.clear();
		memset(ok,false,sizeof(ok));
		Try(1);
		for(int i=res.size()-1;i>=0;i--){
			for(int j=0;j<res[i].size();j++){
				cout<<res[i][j];
			}
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

