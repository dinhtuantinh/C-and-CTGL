#include <stdio.h> 
int main(void) { 
	int n, i, j; 
	scanf("%d", &n); 
	for (i = 1; i <= n; i++) { 
		for (j = (i % 2 == 0) ? 2 : 1; j <= (i * 2); j += 2) { 
			printf("%d", j); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
