#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n,kq;
bool hang[15],cot[15],xu[25],ngc[25];
int a[15];
int v[11][11];
void Quay_lui(int i){
	for(int j=1;j<=n;j++){
		if(!ngc[i+j-1]&&!xu[i-j+n]&&!cot[j]&&!hang[j]){
			a[i]=j;
			hang[j]=cot[j]=ngc[i+j-1]=xu[i-j+n]=true;
			if(i!=n) Quay_lui(i+1);
			else{
				int tmp=0;
				for(int y=1;y<=8;y++){
					tmp+=v[y][a[y]];
				}
				kq=max(kq,tmp);
			}
			cot[j]=hang[j]=xu[i-j+n]=ngc[i+j-1]=false;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin>>v[i][j];
			}
		}
		n=8;
		for(int i=0;i<15;i++){
			hang[i]=cot[i]=false;
		}
		for(int i=0;i<25;i++){
			ngc[i]=xu[i]=false;
		}
		kq=0;
		Quay_lui(1);
		cout<<kq<<endl;
	}
	return 0;
}
