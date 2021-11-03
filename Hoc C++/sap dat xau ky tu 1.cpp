#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void solve(string s){
	int kq=0,a[500]={0};
		for(int i=0;i<s.size();i++){
			a[s[i]]++;
			if(kq<a[s[i]]){
				kq=a[s[i]];
			}
		}
		if(kq<=(s.size()/2+1)&&s.size()%2==1){
			cout<<1;
		}
		else if(s.size()%2==0&&kq<=s.size()-kq){
			cout<<1;
		}
		else{
			cout<<-1;
		}
		cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve(s);
	}
	return 0;
}

