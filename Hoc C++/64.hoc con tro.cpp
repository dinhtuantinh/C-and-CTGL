#include<bits/stdc++.h>

using namespace std;

int main(){
	int *p;
	p=new int;//cap phat bo nho cho con tro p
	*p=100;//gan gia tri bang 100 tai o nho ma p dang tro toi
	cout<<"dia chi tai con tro p="<<p<<endl;
	cout<<"dia chi ma con tro p chi toi="<<*p<<endl;
	delete p;//thu hoi bo nho
	
	return 0;
}


