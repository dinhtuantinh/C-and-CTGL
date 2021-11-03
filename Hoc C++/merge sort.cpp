#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void Nhap(int M[],int n);
void Xuat(int M[],int n);
void MergeSort(int M[],int left,int right);
void Merge(int M[],int left, int mid, int right);
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int M[n];
		Nhap(M,n);
		//cout<<"Mang vua nhap:\n";
		//Xuat(M,n);
		MergeSort(M,0,n-1);
		//cout<<"\nMang sau sap xep:\n";
		Xuat(M,n);
		cout<<endl;
	}
	return 0;
}
void Nhap(int M[],int n){
	for(int i=0;i<n;i++){
		cin>>M[i];
	}
}
void Xuat(int M[],int n){
	for(int i=0;i<n;i++){
		cout<<M[i]<<" ";
	}
}
void MergeSort(int M[],int left,int right) {
	if(left >= right) return;
	int mid = (left + right) / 2;
	MergeSort(M, left, mid);
	MergeSort(M, mid + 1, right);
	Merge(M, left, mid, right);
}
void Merge(int M[],int left, int mid, int right){
	int nTemp = right - left + 1;
	int Temp[nTemp];
	int pos = 0;
	int i = left;
	int j = mid + 1;
	while(!(i>mid && j>right))
	{
		if((i<=mid && j<=right && M[i]<M[j]) || j>right)
			Temp[pos++] = M[i++];
		else
			Temp[pos++] = M[j++];
	}
	for(int i=0;i<nTemp;i++)
		M[left + i] = Temp[i];
}
