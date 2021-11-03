#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	double a, b, c;
	cout<<"gia phuong trinh bac hai ax^2+bx+c=0"<<endl;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	if(a==0){
		if(b==0&&c==0){
			cout<<"Phuong trinh vo so nghiem";
		}
		else if(b==0&&c!=0){
			cout<<"Phuong trinh vo nghiem";
		}
		else{
			//bx=-c=>x=-c/b
			double x=-c/b;
			cout<<"phuong trinh co nghiem la: "<<x;
		}
	}
	else{
		double delta=pow(b,2)-4*a*c;
		if(delta<0){
			cout<<"phuong trinh vo nghiem";
		}
		else if(delta==0){
			double nkep=-b/(2*a);
			cout<<"phuong trinh co nghiem kep x1 = x2 = "<<nkep;
		}
		else{
			double x1=(-b-sqrt(delta))/(2*a);
			double x2=(-b+sqrt(delta))/(2*a);
			cout<<"Phuong trinh co hai nghiem la:"<<endl;
			cout<<"x1 = "<<x1<<endl;
			cout<<"x2 = "<<x2<<endl;
		}
	}
	return 0;
}


