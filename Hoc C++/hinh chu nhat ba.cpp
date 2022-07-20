#include<stdio.h> 
int main() { 
	int m,n; int i,j; scanf("%d %d",&m,&n); 
	for(i=1;i<=m;i++) { 
		for(j=i;j>0&&j<=n;j--) printf("%d",j); 
		if(i>n) { 
			for(j=i;j>(i-n);j--) printf("%d",j); 
		} 
		else for(j=2;j<=(n-i+1);j++) printf("%d",j); 
		printf("\n"); 
	} 
}
