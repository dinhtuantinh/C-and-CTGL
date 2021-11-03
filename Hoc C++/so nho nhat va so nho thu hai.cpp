#include<iostream>
#include<algorithm>
using namespace std;
int a[100000];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++) {
			if (a[i] != a[i + 1]) {
				cout << a[i] << " " << a[i + 1] << endl;
				break;
			}
			else cout << -1 << endl; break;
		}
	}
	return 0;
}
