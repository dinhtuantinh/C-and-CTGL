#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int n;
	cin>>n;
	int check=0;
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		int k=i,chan=0;
		while(k>0){
			int du;
			du=k%10;
			if(du%2==0) chan++;
			k/=10;
		}
		if(chan==n/2){
			if(check<10){
				cout<<i<<"  ";
				check++;
			}
			else{
				check=1;
				cout<<endl<<i<<" ";
			} 	
		}
	}
	return 0;
}

