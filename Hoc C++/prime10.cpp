#include<bits/stdc++.h>

using namespace std;
int Snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
		
	}
	return 1;
}
int tong_chu_so(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int tong_uoc(int n){
	int sum=0;
	int i=2;
	while(n>1){
		while(n%i==0){
			sum+=tong_chu_so(i);
			n/=i;
		}
		i++;
	}
	if(n>1){
		sum+=tong_chu_so(n);
	}
	return sum;
}
void Res(){
	int n;
	cin>>n;
	if(Snt(n)==1) cout<<"NO"<<endl;
	else{
		if(tong_chu_so(n)==tong_uoc(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		Res();
	}
	
}



