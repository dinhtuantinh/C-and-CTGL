#include<bits/stdc++.h>

using namespace std;
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void print_permutations(int a[],int n,int i){
	int j,swap;
	xuatmang(a,n);
	for(j=i+1;j<n;j++){
		if(a[i]<a[j]){
			swap=a[i];
			a[i]=a[j];
			a[j]=swap;
		}
		print_permutations(a,n,i+1);
	}
}
int main(){
	int a[3];
	a[0]=1;
	a[1]=10;
	a[2]=100;
	print_permutations(a,3,0);
	return 0;
}


