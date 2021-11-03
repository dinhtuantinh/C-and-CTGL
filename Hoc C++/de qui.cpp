#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int giaithua(int n){
	if(n==0) return 1;
	else return giaithua(n-1)*n;
}
int fibonacci(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}
int USCLN(int n, int m){
	if(m==0) return n;
	else return USCLN(m,n%m);
}
//tinh so chu so cua mot so tu nhien
int SCS(int x){
	if(x<10) return 1;
	else{
		return 1+SCS(x/10);
	}
}
int main(){
	int n, m, x;
	cout<<"Nhap n va m: ";
	cin>>n>>m;
	cout<<"("<<n<<"!)= "<<giaithua(n)<<"\n\n";
	cout<<"So Fibonacci thu "<<n<<" la "<<fibonacci(n)<<"\n\n";
	cout<<"USCLN("<<n<<","<<m<<") la "<<USCLN(n,m)<<"\n\n";
	cout<<"Nhap so x: ";
	cin>>x; 
	cout<<"So chu so cua "<<x<<" la "<<SCS(x)<<"\n\n";
	return 0;
}

