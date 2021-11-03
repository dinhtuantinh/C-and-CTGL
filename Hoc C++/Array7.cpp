#include<bits/stdc++.h>

using namespace std;
void swap(long *x,long *y){
	long temp=*x;
	*x= *y;
	*y= temp;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n];
		for(long i=0;i<n;i++){
			cin>>a[i];
		}
		long tempArr[n];
		for(long i=0;i<n;i++){
			tempArr[i]=a[i];
		}
		for(long i=0;i<n;i++){
			while(tempArr[i]<pow(10,5)) tempArr[i] *=10;
		}
		for(long i=0;i<n-1;i++){
			for(long j=i+1;j<n;j++){
				if(tempArr[i]>tempArr[j]){
					swap(tempArr[i],tempArr[j]);
					swap(a[i],a[j]);
				}
			}
		}
		for(long i=n-1;i>=0;i--){
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}


