#include<iostream>
using namespace std;
void mang(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void bubblesort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int t = false;
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				t = true;
			}
		}
		if (t == false) break;
		cout << "Buoc " << i + 1 << ": ";
		for (int k = 0; k < n; k++) cout << a[k] << " ";
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	int a[101];
	mang(n, a);
	bubblesort(a, n);
	return 0;
}
