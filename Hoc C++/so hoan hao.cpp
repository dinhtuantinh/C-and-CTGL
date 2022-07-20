#include<stdio.h> 
#include<math.h> 
int main() { 
	int n,s=0,i; 
	scanf("%d",&n); 
	for( i=1;i<n;i++) 
		if(n%i==0) s+=i; 
	if( s==n) printf("1"); 
	else printf("0"); 
	return 0; 
}
