#include<bits/stdc++.h>
using namespace std;

int n;
int a[101];

int max_sum(){
	int res=0;
	int max_i[n], max_d[n];
	
	for(int i=0; i<n; i++){ 
        max_i[i]=a[i]; 
        max_d[i]=a[i]; 
    }
    //max increasing
	for(int i=1; i<n; i++)
		for(int j=0; j<i; j++)
			if(a[j]<a[i]) max_i[i] = max(max_i[i], max_i[j]+a[i]);
	//max decreasing
	for(int i=n-2; i>=0; i--)
		for(int j=n-1; j>i; j--)
			if(a[j]<a[i]) max_d[i] = max(max_d[i], max_d[j]+a[i]);
	//max bitonic
	for(int i=0; i<n; i++)
		res = max(res, max_i[i] + max_d[i] - a[i]);
	
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++)
			cin>>a[i];
		cout<<max_sum()<<endl;
	}
	return 0;
}

