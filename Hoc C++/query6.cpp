#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int maxsum = 0;
   		int sum = 0;
   		for (int i = 1; i <= n; ++i) {
        	sum += a[i];
			maxsum = max(sum, maxsum);
        	if (sum < 0) sum = 0;
        	
  	}
  		cout<<maxsum<<endl;
	}
	return 0;
}

