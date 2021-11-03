#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	long long n, m;
	cin>>n>>m;
	int dem=0;
	if(m%n!=0) dem=0;
	else{
		long long k=m/n;
		long long a=m/n;
		if(a%2==0){
			while(k>=2&&k%2==0){
				k=k/2;
				dem++;
			}
			if(k>=3){
				while(k>=3&&k%3==0){
					k=k/3;
					dem++;
				}
			}
			if(k!=1) dem=0;
		}		
		else if(a%3==0){
			while(k>=3&&k%3==0){
				k=k/3;
				dem++;
			}
			if(k!=1) dem=0;
		}
		else{
			dem=0;
		}
	}
	if(dem==0) cout<<"-1";
	else{
		cout<<dem;
	}
	return 0;
}
