#include<bits/stdc++.h>
//Dinh Tuan Tinh

using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		int x = 0, y = 0;
		int max1=0, max2=0;
		for(int i=0;i<k;i++){
			max1=max1+a[i];
		}
		for (int i = 1; i < n-k+1; i++) {
			for (int j = i; j < i + k; j++) {
				max2 = max2 + a[j];
			}
			if (max2 > max1) {
				max1 = max2;
				x = i;
				y = i + k - 2;
			}
		}
		for(int i=0;i<n;i++){
			if(i>=x&&i<=y){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

