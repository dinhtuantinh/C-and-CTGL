#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		if(s1=="0"||s2=="0") cout<<"0"<<endl;
		else{
			int a[100000]={0},b[100000]={0};
			for(int i=s1.length()-1;i>=0;i--){
				for(int j=s2.length()-1;j>=0;j--){
					a[i+j+1]=a[i+j+1]+(s1[i]-'0')/(s2[j]-'0');
				}
			}
			for(int i=s1.length()+s2.length()-1;i>0;i--){
				a[i]=a[i]+a[i+1]/10;
			}
			if(a[1]>9) a[0]=a[1]/10;
			if(a[0]!=0) cout<<a[0];
			for(int i=1;i<s1.length()+s2.length();i++) cout<<a[i]%10;
			cout<<endl;
		}
	}
	return 0;
}
