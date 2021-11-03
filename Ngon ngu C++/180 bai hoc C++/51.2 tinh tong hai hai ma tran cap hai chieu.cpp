#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int m, n;//nhap so hang va cot cua ma tran
	cout<<"Nhap so hang : ";
	cin>>m;
	cout<<"Nhap so cot: ";
	cin>>n;
	//nhap ma tran A[m][n]
	cout<<"Nhap ma tran A[m][n]\n";
	int A[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"A["<<i<<"]["<<j<<"]=";
			cin>>A[i][j];
		}
		cout<<"\n";
	}
	//nhap ma tran B[m][n]
	cout<<"Nhap ma tran B[m][n]\n";
	int B[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"B["<<i<<"]["<<j<<"]=";
			cin>>B[i][j];
		}
		cout<<"\n";
	}
	cout<<"Ma tran sau nhap la:\n";
	cout<<"Ma tran A:\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\nMa tran B:\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<B[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\nMa tran C = A + B la:\n";
	int C[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			C[i][j]=A[i][j]+B[i][j];
			cout<<C[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}


