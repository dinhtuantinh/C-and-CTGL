#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n, a[100];
vector<vector<int> > s; 
bool check[100];
void Try(int i){
	for(int j=1;j<=n;j++){
		
		if(check[j]==false){
			a[i]=j;
			check[j]=true;
			if(i==n){
				vector<int> b;
				for(int j=1;j<=n;j++){
					b.push_back(a[j]);
				}
				s.push_back(b);
			}
			else{
				Try(i+1);
			}
			check[j]=false;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		s.clear();
		memset(check,false,sizeof(check));
		Try(1);
		for(int i=s.size()-1;i>=0;i--){
			for(int j=0;j<s.size();j++)
				cout<<s[i][j];
			cout<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}

