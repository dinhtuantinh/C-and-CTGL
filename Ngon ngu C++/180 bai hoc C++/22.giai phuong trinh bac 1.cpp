#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int a, b;
	cout<<"Giai phuong trinh bac 1: ax+b=0"<<endl;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	if(a==0&&b==0){
		cout<<"Phuong trinh vo so nghiem";
	}
	else if(a==0&&b!=0){
		cout<<"Phuong trinh vo nghiem";
	}
	else{
		double x=-b*1.0/a;
		cout<<"Phuong trinh co 1 nghiem la: "<<x;
	}
	return 0;
}


