#include<bits/stdc++.h>

using namespace std;
void ngan(){
		long j,k;
		cin>>k>>j;
		long long ketqua;
		while(1){
			if(j%k==0){
				cout<<"1/"<<j/k<<'\n';
				break;
			}
			else{
				ketqua=j/k+1;
				cout<<"1/"<<ketqua<<" + ";
				k=k*ketqua-j;
				j=j*ketqua;
			}
		}
}
int main(){
	int t;
	
	cin>>t;
	for(int yeu=t; yeu>0; yeu--){
		ngan();
		cout<<endl;
	}
	return 0;
}

