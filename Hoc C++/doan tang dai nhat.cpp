#include <stdio.h> 
int main() { 
	int t, n; scanf("%d", &t); 
	for(int h = 1; h <= t; h++) { 
		scanf("%d", &n); 
		int A[n], B[n]; 
		for(int i = 0; i < n; i++) { 
			scanf("%d", &A[i]); 
			B[i] = 1; 
		} 
		for(int i = 0; i < n-1; i++) { 
			for(int j = i+1; j < n; j++) { 
				if(A[j] > A[j-1]) B[i]++; 
				else { i = j-1; break; } 
			} 
		} 
		int M = -1; 
		for(int i = 0; i < n; i++) { 
			if(B[i] > M) M = B[i]; 
		} 
		printf("Test %d: \n", h); 
		printf("%d\n",M); 
		for(int i = 0; i < n; i++) { 
			if(B[i] == M) { 
				for(int j = i; j < i+M; j++) { 
					printf("%d ", A[j]); 
				} 
				printf("\n"); 
			} 
		} 
		printf("\n"); 
	} 
}
