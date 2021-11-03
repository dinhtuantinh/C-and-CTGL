#include<iostream>

using namespace std;
int TinhGiaiThua(int n){
	if(n<=1) return 1;
	return n*TinhGiaiThua(n-1);
}
void H10ToH2(int n){
	if(n>0){
		int t=n%2;
		H10ToH2(n/2);
		cout<<t<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int gt=TinhGiaiThua(n);
	cout<<gt<<endl;
	H10ToH2(n);
	return 0;
}


