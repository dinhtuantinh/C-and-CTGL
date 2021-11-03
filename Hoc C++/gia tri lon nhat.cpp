#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int sum=0,sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		sum1+=a[i];
		sum2+=abs(a[i]);
		if(sum1+sum2>sum){
			sum=sum1+sum2;
		}
	}
	cout<<sum;
	return 0;
}

