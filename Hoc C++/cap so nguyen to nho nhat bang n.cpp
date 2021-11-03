#include<bits/stdc++.h>
using namespace std;
bool nto(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int check=0;
		for (int i = 2; i <=n/2; i++) {
			if (nto(i) == true && nto(n - i) == true) {
				cout << i << " " << n - i;
				check=1;
				break;
			}
		}
		if(check==0) cout<<"-1";
		cout << endl;
	}
	return 0;
}

