#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int x, y;
	cout<<"Nhap so dong:";
	cin>>x;
	cout<<"Nhap so cot:";
	cin>>y;
	int M[x][y];
	for(int i=0; i<x;i++){
		for( int j=0; j<y;j++){
			cout<<"[M"<<i<<"]["<<j<<"]=";
			cin>>M[i][j];
		}
		cout<<"\n";
	}
	cout<<"Mang sau khi nhap:\n";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<M[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Ban muon xuat dong nao? ";
	int r;
	cin>>r;
	for(int j=0;j<y;j++){
		cout<<M[r][j]<<"\t";
	}
	cout<<"\n";
	
	if(x==y){
		cout<<"Duong cheo chinh:\n";
	 	for(int i=0;i<x;i++){
			cout<<M[i][i]<<"\t";
	 	}
		cout<<"\nDuong cheo phu:\n";
		for(int i=0;i<x;i++){
			cout<<M[i][x-i-1]<<"\t";
		}	
	}
	return 0;
}


