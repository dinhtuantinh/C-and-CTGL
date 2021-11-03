#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int n;
	cout<<"Nhap so luong phan tu mang:";
	cin>>n;
	double M[n];//mang so thuc
	for(int i=0;i<n;i++){
		cout<<"Nhap gia tri cho phan tu thu "<<i<<":";
		cin>>M[i];
	} 
	cout<<"Mang sau khi nhap:\n";
	int i=0;
	do{
		cout<<M[i]<<"\t";
		i++;
	}while(i<n);
	i=0;
	int j=0;
	do{
		j=i+1;
		do{
			if(M[i]>M[j]){//sap xep theo tang dan
				double tam=M[i];
				M[i]=M[j];
				M[j]=tam;
			}
			j++;
		}while(j<n);
		i++;
	}while(i<n-1);
	cout<<"\nMang sau khi sap xep:\n";
	i=0;
	while(i<n){
		cout<<M[i]<<"\t";
		i++;
	}
	return 0;
}


