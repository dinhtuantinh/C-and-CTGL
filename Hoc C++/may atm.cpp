#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n, s, res=40;
int a[31];
void Try(int i,int value,int dem){
	if(value>s) return;
	
	
	if(value==s) res=min(res,dem);
	if(i>n) return;
	if(value+a[i]<=s) Try(i+1,value+a[i],dem+1);
	Try(i+1,value,dem);
	
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		res=40;
		cin>>n>>s;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		Try(1,0,0);
		if(res!=40) cout<<res;
		else cout<<-1;
		cout<<endl;
	}
	return 0;
}
