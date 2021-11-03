#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
bool h[11], c[11],nguoc[22],xuoi[22];
int n, kq;
void Quay_lui(int i){
	for(int j=1;j<=n;j++){
		if(!h[j] && !c[j] &&!nguoc[i+j-1] &&!xuoi[i-j+n]){
			h[j]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=true;
			if(i==n){
				kq++;
			}
			else{
				Quay_lui(i+1);
				
			}
			h[j]=c[j]=nguoc[i+j-1]=xuoi[i-j+n]=false;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Quay_lui(1);
		cout<<kq<<endl;
		kq=0; 
	}
	return 0;
}

