#include<bits/stdc++.h>
using namespace std;
int a[11], n, hoanvi[11];
bool check[11];
void Try(int i){
	for(int j=0;j<n;j++){
		if(check[j]==false){
			hoanvi[i]=a[j];
			check[a[j]]=true;
			if(i==n-1){
				for(int l=0;l<n;l++){
					cout<<char(hoanvi[l]+'A');
				}
				cout<<' ';
			}
			else{
				Try(i+1);
			}
			check[a[j]]=false;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			a[i]=s[i]-'A';
		}
		n=s.size();
		sort(a,a+n);
		Try(0);
		cout<<endl;
	}
	return 0;
}
