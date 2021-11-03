#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long tongle,tongchan;
	if(n%2==0){
		tongchan=(n+2)*((n-2)/2+1)/2;
		tongle=(n)*((n-1)/2+1)/2;
	}
	else{
		tongle=(n+1)*((n-2)/2+1)/2;
		tongchan=(n+1)*((n-3)/2+1)/2;
	}
	if(tongchan>=tongle) cout<<tongchan-tongle;
	else cout<<"-"<<tongle-tongchan;
	return 0;
}
