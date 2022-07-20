//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[100000];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n - 1; i++) {
//		cout<<"Buoc "<<i+1<<": ";
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] > a[j]) {
//				swap(a[i], a[j]);
//			}
//		}
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << " ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

#include <stdio.h> 
int main() { 
	int n, A[100], min; scanf("%d", &n); 
	for(int i = 0; i < n; i++) { 
		scanf("%d", &A[i]); 
	} 
	for(int i = 0; i < n-1; i++) { 
		min = i; 
		for(int j = i+1; j < n; j++) { 
			if(A[j] < A[min]) { 
			int tmp = A[j]; 
			A[j] = A[min]; 
			A[min] = tmp; 
			} 
		} 
		printf("Buoc %d: ", i+1); 
		for(int i = 0; i < n; i++) { 
			printf("%d ", A[i]); 
		} 
		printf("\n"); 
	} 
}
