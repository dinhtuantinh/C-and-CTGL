#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int sum1=0,sum2=0,sum3=0,sum4=0;
		for(int i=0;i<n;i++){
			if(i<k) sum1=sum1+a[i];
			else sum2=sum2+a[i];
		} 
		sum3=abs(sum2-sum1);
		sum1=0;sum2=0;
		for(int i=0;i<n;i++){
			if(i<n-k) sum1=sum1+a[i];
		 	else sum2=sum2+a[i];
		}
		sum4=abs(sum2-sum1);
		sum1=0;sum2=0;
		if(sum3>=sum4) cout<<sum3;
		else cout<<sum4;
		cout<<endl;
	}
	return 0;
}

