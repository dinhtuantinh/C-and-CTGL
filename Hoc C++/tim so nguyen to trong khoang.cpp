#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool Nto(int n){
	if(n<2) return false;
	if(n==2) return true;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int a,b,x,y;
	cin>>a>>b;
	if(a>b){
		x=b;
		y=a;
	}
	if(a<b){
		x=a;
		y=b;
	}
	for(int i=x;i<=y;i++){
		if(Nto(i)==1){
			cout<<i<<"\t";
		}
	}
}



