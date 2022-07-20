#include<stdio.h> 
#include<math.h> 
int main(){ 
	int a; 
	long long b; 
	scanf("%lld",&b); 
	for(a=1;a<=10;a++){ 
		printf("%5lld",b*a);
	} 
	return 0; 
}
