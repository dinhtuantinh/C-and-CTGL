#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	/*int n;
	cout<<"Nhap n: ";
	cin>>n;
	int sd=n%2;
	switch(sd){
		case 0:
			cout<<n<<" la so chan";
			break;
		case 1:
			cout<<n<<" la so le";
			break;
		default:
			cout<<"Ban nhap sai gia tri";
	}*/
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	switch(x){
		case 1:
		case 2:
		case 3:
			cout<<"xyz";
			break;
		case 4:
		case 9:
			cout<<"w";
			break;
		default:
			cout<<"chua ho tro";
	}
	return 0;
}


