#include<stdio.h> 
#include<math.h> 
int thuannghich(int n){ 
	int a=0; int b; 
	int temp=n; 
	while(n!=0){ 
		b=n%10; 
		if(b==9){ 
			return 0; 
			break; 
		} 
		else{ 
			a=a*10+b; 
			n/=10; 
		} 
	} 
	if(temp==a){ 
		return 1; 
	} 
	else{ 
		return 0; 
	} 
} 
int main(){ 
	int n,count =0; 
	scanf("%d",&n); 
	for(int i=2;i<n;i++){ 
		if(thuannghich(i)==1){ 
			printf("%d ",i); 
			count++; 
		} 
	} 
	printf("\n%d",count); 
}
