#include<iostream>

using namespace std;
int min(int a,int b){
	return a<b?a:b;
}
int main(){
	int c=5;
	int d=6;
	int x=min(c,d);
	cout<<x;
	return 0;
}


