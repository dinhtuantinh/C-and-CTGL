#include<stdio.h> 
int main() { 
	int n; scanf("%d", &n); 
	while (n--) { 
		long long a[100] = {1,1}; 
		for (int i=2; i<=100; i++) { 
			a[i] = a[i-1] + a[i-2]; 
		} 
		int i; scanf("%d", &i); 
		printf("%lld", a[i-1]); 
		printf("\n"); 
	} 
} 
