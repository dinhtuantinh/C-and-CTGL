#include <bits/stdc++.h>
using namespace std;
long long Fibo[93];
void kq(){
	long long n,i;
	cin>>n>>i;
	while(n>2){
		if(i<=Fibo[n-2]) n-=2;
		else{
			i-=Fibo[n-2];
			n-=1;
		}
	}
	if(n==1) cout<<"A";
	else cout<<"B";
	cout<<endl;
}

int main() {
    Fibo[1]=Fibo[2]=1;
    for(int i=3;i<=92;i++){
    	Fibo[i]=Fibo[i-1]+Fibo[i-2];
	}
    int t;
    cin >> t;
    while (t--) kq();
    return 0;
}

