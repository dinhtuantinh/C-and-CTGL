#include<iostream>
#include<algorithm>
using namespace std;
int a[100000];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		cout<<"Buoc "<<i+1<<": ";
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout<<endl;
	}
	return 0;
}
