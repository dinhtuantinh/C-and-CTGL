#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int n;//n la thang
	cout<<"Moi ban nhap thang trong nam: ";
	cin>>n;
	switch(n){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"Thang co 31 ngay.";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"Thang co 30 ngay.";
			break;
		case 2:
			int nam;
			cout<<"Moi ban nhap vao so nam:";
			cin>>nam;
			if(nam%4==0&&nam%100!=0){
				cout<<"Thang co 29 ngay.";
			}
			else{
				cout<<"Thang co 28 ngay.";
			}
	}
	return 0;
}


