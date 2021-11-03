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
	int key, j, dem=0;
	for (int i = 0; i < n; i++) {
		cout<<"Buoc "<<i<<": ";
		j=i;
		key = a[i];
		while(j>0 && key < a[j-1]){
			a[j] = a[j-1];
			j=j-1;
			
		}
		dem++;
		a[j] = key;
		for (int i = 0; i < dem; i++) {
			cout << a[i] << " ";
		}
		cout<<endl;
	}
	return 0;
}
