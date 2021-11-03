#include<bits/stdc++.h>

using namespace std;

int main(){
	int a=20,b=15;
	int *pa,*pb,temp;
	pa=&a;
	pb=&b;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"da chi con tro pa="<<pa<<endl;
	pa++;
	cout<<"da chi con tro pa="<<pa<<endl;
	cout<<"gia tri con tro pa="<<*pa<<endl;
	return 0;
}


