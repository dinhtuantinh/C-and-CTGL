#include<stdio.h> 
int main() { 
	int n; scanf("%d",&n); 
	int i,j; 
	for(i=1;i<=2*n;i+=2) { 
		for(j=1;j<=i;j+=2) { 
			printf("%c",63+j); 
		} 
		for(j=i-2;j>=1;j-=2) { 
			printf("%c", 63+j); 
		} 
		printf("\n"); 
	} 
}
