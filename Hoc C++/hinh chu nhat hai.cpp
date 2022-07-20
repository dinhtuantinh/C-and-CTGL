#include <stdio.h> 
#include <math.h> 
int main(){ 
	int a,b; 
	int i,j,k,m; 
	scanf("%d %d",&a,&b); 
	for( i=1;i<=a;i++){ 
		for( j=i;j<=b;j++){ printf("%d",j); } 
		if(i>b){ printf("%d",i); 
			for(k=i-1;k>=i-(b-1);k--){ printf("%d",k); } 
		} 
		else { 
			for( m=j-2;m>=j-(i) ;m--){ printf("%d",m); } 
		} 
		printf("\n"); 
	} 
}
