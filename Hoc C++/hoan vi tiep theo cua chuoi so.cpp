#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, i, j;
		cin>>j;
		string x;
		cin>>x;
		n = x.size();
		i = n - 2;
		while(x[i] >= x[i+1]){
			i--;
		}
		if(i < 0){
			cout<<j<<" BIGGEST"<<endl;
		}
		else{
			int k = n-1;
			while(x[k] <= x[i]){
				k--;
			}	
			swap(x[i], x[k]);
			i++; k = n-1;
			while(i <= k){
				swap(x[i], x[k]);
				i++; k--;
			}
			cout<<j<<" "<<x<<endl;
		}
	}
	return 0;
}

