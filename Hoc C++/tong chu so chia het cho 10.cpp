#include<stdio.h> 
int tongchiahet10(int n){ 
	int sum=0; 
	while(n>0){ sum=sum+n%10; n=n/10; } 
	if(sum%10==0) return 1; 
	return 0; 
} 
int main(){ 
	int t; scanf("%d",&t); 
	while(t--){ 
		int n; scanf("%d",&n); 
		if(tongchiahet10(n)==1) printf("YES\n"); 
		else printf("NO\n"); 
	} 
}
