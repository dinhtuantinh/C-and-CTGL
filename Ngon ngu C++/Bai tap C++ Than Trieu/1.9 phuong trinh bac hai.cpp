#include<iostream>
#include<math.h>
using namespace std;
//giai phuong trinh bac 2
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	float a, b, c;
	cin>>a>>b>>c;
	float d=b*b-4*a*c;
	if(a==0){
		if(b==0){
			if(c==0){
				cout<<"Phuong trinh vo so nghiem!"<<endl;
			}
			else{
				cout<<"Phuong trinh vo nghiem!"<<endl;
			}
		}
		else{
			cout<<"Phuong trinh co nghiem duy nhat la: "<<(float(-c/b))<<endl;
		}
	}
	else{
		if(d<0){
			cout<<"Phuong trinh vo nghiem!";
		}
		else if(d>0){
			cout<<"Phuong trinh co hai nghiem: "<<(float((-b-sqrt(d))/(a*2)))<<"  ";
			cout<<(float((-b+sqrt(d))/(a*2)))<<endl;
		}
	}

	return 0;
}


