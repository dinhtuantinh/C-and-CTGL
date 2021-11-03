#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
string s;
int a[100];
bool chuaxet[100];
void Try(int i){
	for(int j=0;j<s.size();j++){
		if(!chuaxet[j]){
			a[i]=j;
			chuaxet[j]=true;
			if(i==s.size()){
				for(int l=1;l<=s.size();l++)
					cout<<s[a[l]];
				cout<<" ";
			}
			else Try(i+1);
			chuaxet[j]=false;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		sort(s.begin(),s.end());
		Try(1);
		cout<<endl;
	}
	return 0;
}

