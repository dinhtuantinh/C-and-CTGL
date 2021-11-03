#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		long long dem=0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i*i==n&&i%2==0) dem++;
				else{
					if(i%2==0) dem++;
					if((n/i)%2==0) dem++;
				}
			}
		}
		cout<<dem;
		
		cout<<endl;
	}	
}
