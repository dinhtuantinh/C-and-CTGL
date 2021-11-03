#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	long long m,n;//m, n la tu va mau
	cin>>t;
	while(t--){
		cin>>m>>n;
		long long kq;
		while(1){
			if(n%m==0){
				cout<<"1/"<<n/m<<"\n";
				break;
			}
			else{
				kq=n/m+1;
				cout<<"1/"<<kq<<" + ";
				m=m*kq-n;
				n=n*kq;
			}
		}
		cout<<endl; 
	}
	return 0;
}

