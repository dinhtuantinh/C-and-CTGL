#include<bits/stdc++.h>

using namespace std;
void tong_cac_chu_so(long long n){
	int sum=0;
	int du;
	while(n>0){
		du=n%10;
		sum=sum+du;
		n/=10;
	}
	if(sum>9){
		return tong_cac_chu_so(sum);
	}
	else cout<<sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		tong_cac_chu_so(n);
		cout<<endl;
	}
	return 0;
}


