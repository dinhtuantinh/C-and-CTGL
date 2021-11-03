#include<iostream>

using namespace std;
void ham1(int x){
	x=10;
	cout<<"x trong ham 1="<<x;
}
int ham2(int &x){
	x=10;
	cout<<"x trong ham 2="<<x;
}
int main(){
	int x=5;
	cout<<"x truoc khi vao ham 1="<<x<<endl;
	ham1(x);
	cout<<"\nx sau khi vao ham 1="<<x<<endl;
	
	x=5;
	cout<<"x truoc khi vao ham 2="<<x<<endl;
	ham2(x);
	cout<<"\nx sau khi vao ham 2="<<x<<endl;
	return 0;
}


