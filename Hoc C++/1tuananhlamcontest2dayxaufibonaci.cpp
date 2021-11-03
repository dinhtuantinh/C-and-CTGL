#include <bits/stdc++.h>
using namespace std;
long long Fibonaci[93];
void ngan();
int main() {
    Fibonaci[1]=Fibonaci[2]=1;
    for(int i=3;i<=92;i++){
    	Fibonaci[i]=Fibonaci[i-1]+Fibonaci[i-2];
	}
    int t;
    cin >> t;
    for(int tea=0; tea<t; tea++) ngan();
    return 0;
}
void ngan(){
	long long n,i;
	cin>>n>>i;
	while(n>2){
		if(i<=Fibonaci[n-2]) n-=2;
		else{
			i-=Fibonaci[n-2];
			n-=1;
		}
	}
	if(n!=1) cout<<"B";
	else cout<<"A";
	cout<<endl;
}
