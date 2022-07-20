#include<bits/stdc++.h>
#define MAX 100

using namespace std;
void XuatMangCon(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int KiemTraTangDan(int b[], int nb){
	for(int i = 0; i < nb - 1; i++){
		if(b[i] > b[i + 1]){
			return 0;
		}
	}
return 1;
}

void LietKeDayConTangDan(int a[], int n){
	int ChieuDai;
	int b[MAX], nb;
	for(int i = 0; i < n; i++){
		for(ChieuDai = 1; ChieuDai <= n; ChieuDai++){
			nb = 0;
			for(int j = i; j < ChieuDai; j++){
				b[nb] = a[j];
				nb++;
			}
			if(KiemTraTangDan(b, nb) == 1){
				XuatMangCon(b, nb);
			}
		}
	}
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	sort(a,a+n);
	LietKeDayConTangDan(a,n);
}

