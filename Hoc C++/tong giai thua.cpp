#include <stdio.h>

int main() {
	unsigned int n; 
	unsigned long long sum = 0;
	unsigned long long gt = 1;
	//printf("Nhap so nguyen duong n: ");
	scanf("%u", &n);
	int i;
	for(i = 1; i <= n; i++) {
		gt *= i; // gt: i!
		sum += gt; // sum = sum + i!
	}
	printf("%llu\n", sum);
	
	return 0;
}
