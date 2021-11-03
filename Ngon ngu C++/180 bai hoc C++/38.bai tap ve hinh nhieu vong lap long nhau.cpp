#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int n;
	cin>>n;
	for( int i=0; i<n; i++){
		for(int j=0; j<n;j++)
			if((j==0&&i<=n/2)||(j==n-1&&i>=n/2)||i==j||i==n/2){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		cout<<"\n";
	}
	return 0;
}


