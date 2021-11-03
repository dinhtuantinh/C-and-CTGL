#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int a, b;
	cin>>a; cin>>b;
	if(a>b){
		cout<<"a > b";
	}
	else if(a < b){
		cout<<"a < b";
	}
	else{
		cout<<"a = b";
	}


	return 0;
}


