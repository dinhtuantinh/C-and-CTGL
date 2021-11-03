/*#include<bits/stdc++.h>
#define modulo 1000000007
using namespace std;
int a[10000];
int UCLN(int x,int y){
	int temp;
	while(x!=0){
		temp =x;
		x=y%x;
		y=temp;
	}
	return y;
}
int main(){
	int  t,Size,i,GCD,j;
	long long tich;
	cin>>t;
	while(t--){
		cin>>Size;
		for(i=0;i<Size;i++) cin>>a[i];
		GCD=UCLN(a[0],a[0]);
		for(i=1;i<Size;i++) GCD=UCLN(GCD,a[i]);
		tich=1;
		for(i=0;i<Size;i++){
			for(j=0;j<GCD;j++){
				tich=(tich*a[i])%modulo;
			}
		}
		cout<<tich<<endl;
	}
	return 0;
}*/
#include<bits/stdc++.h>
//Dinh Tuan Tinh  
using namespace std;
long long mod = 1e9+7;

long long GCDarr(long long a[], long long n) {
	long long res =a[0];
	for (long long i = 0; i < n; i++) {
		res = __gcd(a[i],res);
		res%=mod;
		
	}
	return res;
}
long long pow(long long a, long long b) {
	if (b == 0) return 1;
	long long m = pow(a, b / 2);
	m *= m;
	m %= mod;
	if (b % 2 == 0) return m;
	 	return (m * a) % mod;
}
int main() {
	long long t; cin >> t;
	while (t--) {
	long long n; cin >> n;	long long a[n]; 
		long long tich = 1;
		for (long long i = 0; i < n; i++) {
			cin >> a[i];
			tich *= a[i];
			tich%=mod;
		}
		cout << pow(tich, GCDarr(a, n));
		cout << endl;
	}
}

