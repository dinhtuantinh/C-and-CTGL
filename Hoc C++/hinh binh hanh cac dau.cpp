#include<stdio.h> 
main() { 
	int N, i, j, k; scanf("%d",&N); 
	for(i=N ; i>=1 ; i--) { 
		for(j=i-1 ; j>0 ; j--) { 
			printf("~"); 
		} 
		for(k=1 ; k<=N ; k++) printf("*"); 
		printf("\n"); 
	} 
}
