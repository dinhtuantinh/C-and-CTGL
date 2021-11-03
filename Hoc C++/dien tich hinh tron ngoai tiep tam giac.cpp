#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
#define PI 3.141592653589793238
int main(){
	int t;
	cin>>t;
	while(t--){
		int xa,ya,xb,yb,xc,yc;
		cin>>xa>>ya>>xb>>yb>>xc>>yc;
		long long kta=xa*xa+ya*ya,ktb=xb*xb+yb*yb,ktc=xc*xc+yc*yc;
		if(kta+ktb<ktc||ktb+ktc<kta||ktc+kta<ktb) cout<<"INVALID";
		else{
			printf("%.3f", (PI*kta*ktb*ktc)/((sqrt(kta)+sqrt(ktb)+sqrt(ktc))*((sqrt(kta)+sqrt(ktb)-sqrt(ktc))*((sqrt(ktc)+sqrt(ktb)-sqrt(ktc))*((sqrt(kta)-sqrt(ktb)+sqrt(ktc))));
		}
		cout<<endl;
	}
	return 0;
}

