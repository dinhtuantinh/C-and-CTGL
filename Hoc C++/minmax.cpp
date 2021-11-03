#include<bits/stdc++.h>

using namespace std;
int tong(int n){
	int du,sum=0;
	while(n>0){
		du=n%10;
		sum=sum+du;
		n/=10;
	}
	return sum;
}
int main(){
		int m,s;
		cin>>m>>s;
		int dem=0;
		for(long long i=pow(10,m-1);i<pow(10,m);i++){
			if(tong(i)==s){
				dem++;
			}
		}
		if(dem<2){
			cout<<"-1 -1";
		}
		else{
			for(long long i=pow(10,m-1);i<pow(10,m);i++){
				if(tong(i)==s){
					cout<<i<<" ";
					break;
				}
			}
			for(long long i=pow(10,m);i>pow(10,m-1);i--){
				if(tong(i)==s){
					cout<<i<<endl;
					break;
				}
			}
		}
		
		
	
	return 0;
}


