#include<iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	float a, b, c, d, e;
	float max=a;
	cin>>a >> b >> c >> d >> e;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	if(e>max){
		max=e;
	}
	if(a==b&&b==c&&c==d&&d==e){
		cout<<"Khong co gia tri max!"<<endl;
	}
	else{
		cout<<"Max = "<<max<<endl;
	}
	return 0;
}


