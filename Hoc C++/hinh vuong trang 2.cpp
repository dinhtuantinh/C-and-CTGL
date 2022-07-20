#include<stdio.h> 
#include<math.h> 
int min(int a, int b){ 
	if(a<b) return a; 
	return b;
} 
int main(){ 
	int n,i,j; int minkc; scanf("%d",&n); 
	for(i=1;i<=2*n-1;i++){ 
		for(j=1;j<=2*n-1;j++){ 
			minkc=min(min((i-1),(2*n-1-i)),min(j-1,2*n-1-j)); 
			printf("%d",n-minkc); 
		} 
		printf("\n"); 
	} 
}
