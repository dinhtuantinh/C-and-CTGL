#include<bits/stdc++.h>

using namespace std;
int fib(int n){
	if(n<=2) return 1;
	return fib(n-1)+fib(n-2);
}
void xuatdayfib(int n){
	for(int i=1;i<=n;i++){
		cout<<fib(i)<<" ";
	}
}
int main(){
	int n=8;
	cout<<fib(n)<<"\n";
	xuatdayfib(n);
	return 0;
}


