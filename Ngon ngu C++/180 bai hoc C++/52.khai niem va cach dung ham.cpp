#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Tong2so();
int XuatDulieu();
void Output();
int main(int argc, char** argv){
	Output();
	return 0;
}
int Tong2so(int a,int b){
	return a+b;
}
int XuatDulieu(int x){
	cout<<x<<endl;
}
void Output(){
	int kq=Tong2so(5,10);
	XuatDulieu(kq);
}


