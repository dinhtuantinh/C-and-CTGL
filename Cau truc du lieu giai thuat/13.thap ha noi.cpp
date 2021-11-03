#include<bits/stdc++.h>
//Dinh Tuan Tinh
//Bai toaan thap Ha Noi
using namespace std;
void move(int n,char A, char B,char C){
	if(n==1){
		cout<<A<<"==>"<<C<<"\n";
	}
	else{
		move(n-1,A,C,B);
		cout<<A<<"==>"<<C<<"\n";
		move(n-1,B,A,C);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		move(n,'A','B','C');
		double m=log2(n);
		cout<<m<<endl;
	}
	return 0;
}


