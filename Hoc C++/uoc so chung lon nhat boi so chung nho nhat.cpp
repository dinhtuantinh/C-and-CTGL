#include<stdio.h> 
int ucln(long long a, long long b){ 
	if(b==0){ 
		return a; 
	} 
	ucln(b,a%b); 
} 
main(){ 
	long long a, b; scanf("%lld%lld", &a, &b); 
	printf("%lld\n%lld", ucln(a,b), a*b/ucln(a,b));
}
