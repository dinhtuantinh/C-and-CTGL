#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		long long n;cin>>n;
		long long a[n];
		int dem=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]) dem++;
			}
		} 
		cout<<dem<<endl;
//	}
	return 0;
}

