#include<stdio.h>
int main(){ 
	int n,i,a,b,k; 
	scanf("%d",&n); 
	k=1; 
	while(k<=n){ 
		a=n-k; 
		for(i=1;i<=a; i++){ 
			printf("~"); 
		} 
		b=k; 
		for(i=1;i<=b;i++){ printf("*"); } 
		printf("\n"); k++; 
	} 
}
