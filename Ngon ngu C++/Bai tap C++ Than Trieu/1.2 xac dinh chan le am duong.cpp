#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int n;
	cin>>n;
	if(n>0){
		cout<<n<<" la so duong."<<"\n";
	}
	if(n<0){
		cout<<n<<" la so am."<<"\n";
	}
	if(n%2!=0){
		cout<<n<<" la so le."<<endl;
	}
	if(n%2==0){
		cout<<n<<" la so chan."<<endl;
	}

	return 0;
}


