#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int cxet[100];
int n;
long a[21][21];
long b[101];
long s=0;
long Min=10000000, cmin=10000000;
void Quay_lui(int i){
	if(s+cmin*(n-i+1)>=Min){
		return;
	}
	for(int j=1;j<=n;j++){
		if(cxet[j]){
			b[i]=j;
			cxet[j]=0;
			s+=a[b[i-1]][j];
			if(i!=n){
				Quay_lui(i+1);
			}
			else{
				if(s+a[b[n]][b[1]]<Min){
					Min=s+a[b[n]][b[1]];
				}
			}
			s-=a[b[i-1]][j];
			cxet[j]=1;
		}
	}
}
int main(){
	memset(cxet,1,sizeof(cxet));
	cxet[1]=0;
	b[1]=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			cmin=min(cmin,a[i][j]);
		}
	}
	Quay_lui(2);
	cout<<Min;
	return 0;
}

