#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void InsertionSort(int M[],int n){
	//luu vi tri can chen
	int pos;
	//luu tru gia tri M[i] tranh bi ghi de khi doi cho cac phan tu.
	int x;
	//xem doan M[0] da sap
	for(int i = 1; i < n; i++){
		x = M[i];
		for(pos=i; (pos>0) && (M[pos-1]>x);pos--){
			M[pos]=M[pos-1];
		}
		M[pos]=x;//chen x vao dãy 
	}
}
int main(){
	int n;
	cin>>n;
	int M[n];
	for(int i=0;i<n;i++){
		cin>>M[i];
	}
	InsertionSort(M,n);
	for(int i=0;i<n;i++){
		cout<<M[i]<<" ";
	}
	return 0;
}

