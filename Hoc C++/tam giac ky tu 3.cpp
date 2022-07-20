#include<stdio.h> 
int main() { 
	int n; scanf("%d", &n); 
	int i,j,a[n][n]; 
	int k=65; 
	for(i=0;i<n;i++) { 
		for(j=i;j<n;j++) { 
			a[j][i]=k; k++; 
		} 
	} 
	for(i=0;i<n;i++) { 
		for(j=0;j<=i;j++) { 
			printf("%c ", a[i][j]); 
		} 
		printf("\n"); 
	} 
}
