#include <stdio.h> 
int main() { 
	int c; scanf("%d", &c); 
	for (int i = 1; i <= c; i++) { 
		for (int j = i; j <= c; j++) { 
			printf("%c", 63 + j*2); 
		} printf("\n"); 
	} 
}
