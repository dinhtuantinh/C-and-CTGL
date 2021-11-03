#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int NTCN(int a,int b)
{
	int m;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	if(a==1){
		return 1;
	}
	else{
		return 0;
	} 
}
int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}	
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(NTCN(a[i],a[j])==1) cout<<a[i]<<" "<<a[j]<<endl;
			}
		}
//	}
	return 0;
}

