#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void SelectionSort(int M[], int n){
	int min;
	for(int i=0;i<n-1;i++){
		min = i;//gia su so dau trong day dang xet la nho nhat
		for(int j=i+1;j<n;j++){
			//tim so nho nhat trong msng dang xet
			if(M[j]<M[min])
				min = j;
		}
		if(min!=i){
			//neu co so nao nho hon so dau trong day dang xet thi thay doi vi tri cho nhau
			int tmp = M[i];
			M[i] = M[min];
			M[min] = tmp;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int M[n];
	for(int i=0;i<n;i++){
		cin>>M[i];
	}
	SelectionSort(M,n);
	for(int i=0;i<n;i++){
		cout<<M[i]<<" ";
	}
	return 0;
}

