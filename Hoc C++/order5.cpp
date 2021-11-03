#include<bits/stdc++.h>

using namespace std;
int tim(int a[],int n){
	int max=-1;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>max){
				max=a[j]-a[i];
			}
		}
	}
	return max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<tim(a,n)<<endl;
	}
	return 0;
}


