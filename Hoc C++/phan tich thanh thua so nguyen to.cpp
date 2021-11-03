#include<bits/stdc++.h>
using namespace std;
bool snt(long long n){
	if(n<2) return false;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	long long n;
	cin>>n;
	int dem;
	for(long long i=2;i<=sqrt(n);i++){
		dem=0;
		if(n%i==0&&snt(i)){
			cout<<i<<" ";
			while(n%i==0){
				dem+=1;
				n/=i;
			}
			cout<<dem<<endl;
		}	
		
	}
	if(n>1) cout<<n<<" 1";
	cout<<endl;
	return 0;
}
