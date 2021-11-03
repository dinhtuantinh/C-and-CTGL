//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		int a[n];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		int count = 0;
//		int left = 0, right = n - 1;
//		while (left <= right) {
//			if (a[left] == a[right]) {
//				left++;
//				right--;
//			}
//			else if (a[left] < a[right]) {
//				left++;
//				a[left] += a[left - 1];
//				count++;
//			}
//			else {
//				right--;
//				a[right] += a[right + 1];
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int L=0;
		int R=n-1;
		int count=0;
		while(L<=R){
			if(a[L]==a[R]){
				L++;
				R--;
			}
			else if(a[L]<a[R]){
				L++;
				a[L]+=a[L-1];
				count++;
			}
			else{
				R--;
				a[R]+=a[R+1];
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}






















