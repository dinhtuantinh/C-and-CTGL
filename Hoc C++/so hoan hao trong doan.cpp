#include<stdio.h> 
int uoc(int n){ 
	int tong =0; 
	for(int i=1;i<n;++i){ 
		if(n%i==0){ tong=tong +i; } 
	} 
	return tong ; 
} 
int main(){ 
	int a,b; scanf("%d%d",&a,&b); 
	if(a<b) { 
		for(int i=a;i<=b;i++) { 
			if(i==uoc(i)) { 
				printf("%d ",i); 
			} 
		} 
	} 
	else { 
		for(int i=b;i<=a;i++) { 
			if(i==uoc(i)) { 
				printf("%d ",i); 
			} 
		} 
	} 
}
