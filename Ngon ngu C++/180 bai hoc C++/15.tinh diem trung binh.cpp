#include<iostream>
#include<iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	
	double toan, ly , hoa, dtb;
	cout<<"Chuong trinh tinh diem trung binh\n";
	cout<<"Nhap diem Toan:";
	cin>>toan;
	cout<<"Nhap diem Ly:";
	cin>>ly;
	cout<<"Nhap diem Hoa:";
	cin>>hoa;
	dtb=(toan+ly+hoa)/3;
	cout<<"Diem trung binh = "<<dtb<<endl;
	cout<<"Diem trung binh lam tron = "<<setprecision(3)<<dtb<<endl;

	return 0;
}


