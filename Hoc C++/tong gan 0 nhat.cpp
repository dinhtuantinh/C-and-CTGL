#include<iostream>
#include<algorithm>
using namespace std;
int a[100000];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n ;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int sum = a[0] + a[1];
		int kq = sum;
		int s = 0;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				s = a[i] + a[j];
				if ((abs)(a[i] + a[j]) < (abs)(sum)) {
					sum = s;
					kq = s;
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}
