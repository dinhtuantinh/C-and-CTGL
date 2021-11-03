#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long x=9, a[100000]={0};
		a[1]=9;
		int i=2;
		if(a[1]%n==0) cout<<a[1]<<endl;
		else while(1){
			x=x*10; 
			a[i]=x; 
			if(a[i]%n==0){
				cout<<a[i]<<endl; break;
			} 
			i++;
			int k=0, b=i;
			for(int j=1; j<=b-2; j++){
				a[i]=x+a[j];
				if(a[i]%n==0){
					k=1; break;
				}
				i++;
			}
			if(k){
				cout<<a[i]<<endl; break;
			}
		}
	}
	return 0;
}

