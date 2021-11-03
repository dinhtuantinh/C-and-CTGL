#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int n;
	cout<<"Nhap so phan tu mang:";
	cin>>n;
	int M[n];
	for(int i=0;i<n;i++){
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
	cout<<"Mang truoc khi sap xep:\n";
	for(int i=0;i<n;i++){
		cout<<M[i]<<"\t";
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(M[i]>M[j]){
				int tam=M[i];
				M[i]=M[j];
				M[j]=tam;
			} 		
		}
	}
	cout<<"\nMang sau khi sap xep:\n";
	for(int i=0;i<n;i++){
		cout<<M[i]<<"\t";
	}
	return 0;
}


