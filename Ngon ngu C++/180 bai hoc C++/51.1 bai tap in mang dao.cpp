#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int n;
	cout<<"Nhap sao phan tu cua mang: ";
	cin>>n;
	int M[n];
	for(int i=0;i<n;i++){
		cout<<"M["<<i<<"]= ";
		cin>>M[i];
	}
	cout<<"Mang sau khi nhap:\n";
	for(int i=0; i<n;i++){
		cout<<M[i]<<"\t";
	}
	cout<<"\nMang dao la:\n";
	for(int i=n-1;i>=0;i--){
		cout<<M[i]<<"\t";
	}
	return 0;
}


