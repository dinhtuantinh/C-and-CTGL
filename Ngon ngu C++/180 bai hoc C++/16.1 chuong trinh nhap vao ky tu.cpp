#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){

	/*char kt;
	cin>>kt;
	cout<<"Ma ASCII: "<<(int)kt<<endl;
	int A=(float)kt;
	int a=A+1;
	cout<<"Ma ky tu ke tiep: "<<(char)a<<endl;
	*/
	int n;
	cout<<"Nhap vao so n co 3 chu so: ";
	cin>>n;
	int du, sodao=0;
	while(n!=0){
		du=n%10;
		sodao=sodao*10+du;
		n/=10;
	} 
	cout<<"So dao nguoc cua n la: "<<sodao<<endl;
	return 0;
}


