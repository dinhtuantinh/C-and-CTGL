#include<bits/stdc++.h>
using namespace std;
int a[100000];
void sang(){
	for (int i = 2; i < 100000; i++) {
		a[i] = 1;
	}
		for (int i = 2; i < 100000; i++) {
			if (a[i] == 1) {
				for (int j = i * i; j < 100000; j += i) {
					a[j] = 0;
				}
			}
		}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		sang();
		int check=0;
		for (int i = 2; i < n; i++) {
			if (a[i] == 1 && a[n - i] == 1) {
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

