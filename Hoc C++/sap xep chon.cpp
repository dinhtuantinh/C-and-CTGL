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
	int min;
	for (int i = 0; i < n - 1; i++) {
		cout<<"Buoc "<<i+1<<": ";
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min=j;
			}
		}
		if(min != i){
			swap(a[min], a[i]);
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout<<endl;
	}
	return 0;
}
