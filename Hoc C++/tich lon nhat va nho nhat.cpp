#include<iostream>
#include<algorithm>
using namespace std;
long long a[100000];
long long b[100000];
int main() {
	int t;
	cin >> t; 
	while (t--) {
		long long n, m;
		cin >> n >> m;
		for (long long i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (long long i = 0; i < m; i++) {
			cin >> b[i];
		}
		long long max = a[0];
		long long min = b[0];
		for (int i = 1; i < n; i++) {
			if (max < a[i]) {
				max = a[i];
			}
		}
		for (int i = 1; i < m; i++) {
			if (min > b[i]) {
				min = b[i];
			}
		}
		long long c = max * min;
		cout << c << " ";
		cout << endl;
	}
	return 0;
}
