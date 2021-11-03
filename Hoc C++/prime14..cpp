#include<iostream>
#include<math.h>
using namespace std;
bool checkNT(int n){
	if(n<2) return false;
	if(n==2) return true;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}	
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i*i<=n;i++){
			if(checkNT(i)) cout<<i*i<<" ";
		}
		cout<<endl;
	}
}

