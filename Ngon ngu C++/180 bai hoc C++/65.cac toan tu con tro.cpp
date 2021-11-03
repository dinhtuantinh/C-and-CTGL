#include<bits/stdc++.h>

using namespace std;

int main(){
	int count=100;
	int *m=&count;
	cout<<"dia chi cua bien count="<<&count<<endl;
	cout<<"gia tri cua bien count="<<count<<endl;
	cout<<"dia chi cua con tro m="<<m<<endl;
	cout<<"gia tri cua con tro m dang tro toi="<<*m<<endl;
	
	int p=*m;
	cout<<"gia tri cua p="<<p<<endl;
	int *x=m;
	cout<<"dia chi cua con tro x="<<x<<endl;
	cout<<"gia tri cua con tro x dang tro toi="<<*x<<endl;
	*x=15;
	cout<<"gia tri cua con tro m dang tro toi="<<*m<<endl;
	cout<<"gia tri cua bien count="<<count<<endl;
	return 0;
}


