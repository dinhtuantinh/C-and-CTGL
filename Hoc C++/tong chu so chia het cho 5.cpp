#include<stdio.h> 
#include<math.h> 
int nguyento(int n){ 
	if(n<2){ 
		return 0; 
	}
	else{ 
		for(int i=2;i<=sqrt(n);i++){ 
			if(n%i==0){ 
				return 0; 
			} 
		} 
		return 1; 
	} 
} 
int tongchuso(int n){ 
	int sum=0; 
	while(n!=0){ 
		sum+=n%10; n/=10; 
	} 
	if(sum%5==0){ 
		return 1; 
	} 
	else{ 
		return 0; 
	} 
} 
int main (){ 
	int n; 
	int count =0; 
	scanf("%d",&n); 
	for(int i=1;i<n;i++){ 
		if(nguyento(i)==1&&tongchuso(i)==1){ 
			count++; 
			printf("%d ",i); 
		} 
	} 
	printf("\n%d",count ); 
}
