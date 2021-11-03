#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
void InterchangeSort(int M[],int n);
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang au nhap: \n";
	XuatMang(M,n);
	InterchangeSort(M,n);
	cout<<"\nMang sau khi sap xep:\n";
	XuatMang(M,n);
	return 0;
}
void NhapMang(int M[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		M[i]=rand()%100;
	}
}
void XuatMang(int M[],int n)
{
	for(int i=0;i<n;i++){
		cout<<M[i]<<"\t";
	}
}
void InterchangeSort(int M[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(M[j]<M[i])
			{
				int temp=M[i];
				M[i]=M[j];
				M[j]=temp;
			}
		}
	}
}

