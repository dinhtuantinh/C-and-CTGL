#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				int tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	return 0;
}

