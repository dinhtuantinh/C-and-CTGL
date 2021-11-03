#include<bits/stdc++.h>

using namespace std;

int main(){
	int a=5;
	float f=5.5;
	int *pa=&a;
	float *pf=&f;
	void *p;
	p=&a;
	(*(int*)p)=10;
	cout<<"a="<<a<<endl;
	p=&f;
	(*(float*)p)=20.5;
	cout<<"f="<<f<<endl;
	
	int *y=new int;
	*y=113;
	cout<<"gia tri cua o nho ma y quan ly = "<<*y<<endl;
	return 0;
}


