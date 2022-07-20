#include<stdio.h> 
int main(){ 
	int m,n,i,j; scanf("%d %d",&m,&n); 
	for(i=0;i<m;i++){ 
		for(j=0;j<i;j++){ printf("~"); } 
		for(j=0;j<n;j++){ 
			if ((j>0)&&(j<n-1)&&(i>0)&&(i<(m-1))) printf("."); 
			else printf("*"); 
		} 
		printf("\n"); 
	} 
}
