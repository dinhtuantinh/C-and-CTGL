#include<stdio.h> 
main(){ 
	int n; scanf("%d", &n); char c='@'-1; 
	for(int i=n; i>0; i--){ 
		for(int j=0; j<n; j++){ printf("%c", i+j+c); } 
		n--; 
		printf("\n"); 
	} 
}
