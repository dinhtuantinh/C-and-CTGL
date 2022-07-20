#include<stdio.h> 
main(){ 
	int a, b; scanf("%d%d", &a, &b); 
	char c='@'-1; 
	for(int i=1; i<=a; i++){ 
		for(int j=1; j<=b; j++){ 
			if(j+i<=b) printf("%c", i+j-1+c); 
			else printf("%c", b+c); 
		} printf("\n"); 
	} 
}
