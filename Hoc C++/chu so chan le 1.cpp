#include<stdio.h> 
int main(){ 
	int n; 
	scanf("%d", &n); 
	int le = 0, chan = 0; 
	while(n > 0){ 
		int a = n % 10; 
		if(a % 2 == 0)chan+=1; 
		else le+=1; n = n / 10; 
	} 
	printf("%d %d", le, chan); 
}
