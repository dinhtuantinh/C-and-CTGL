#include<stdio.h> 
int main (){ 
	int i,j; 
	int n,k,l=0; 
	scanf("%d",&n);
	int x=0; 
	for(i=1;i<=n;i++){ 
		if(i%2!=0){ 
			for(j=1;j<=i;j++){ 
				k=j+x; 
				printf("%d ",k); 
			} 
		}
		if(i%2==0){ 
			for(int u=i;u>=1;u--){ 
				l=k+u; 
				printf("%d ",l); 
			} 
		} 
		x=l+i-1; 
		printf("\n"); 
	} 
}
