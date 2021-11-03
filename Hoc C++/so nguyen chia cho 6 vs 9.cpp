#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int dem=0;
	for(int i=1000;i<=5000;i++){
		if(i%9==0||i%6==0) dem++;
	}
	cout<<dem<<endl;
	return 0;
}

