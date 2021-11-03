#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	double a, h;
	double dientich;
	cout<<"Moi thim nhap vao canh doi dien tam giac:";
	cin>>a;
	cout<<"Moi thim nhap vao chieu cao tam giac:";
	cin>>h;
	dientich = (double)1/2*a*h;
	cout<<"Dien tich tam giac la: "<<dientich<<endl;
	
	cout<<"      THE END!";
	
	return 0;
}


