#include<stdio.h> 
int main(){ 
	int t; scanf("%d",&t); 
	while(t>0){ 
		int n; scanf("%d",&n); 
		int a[n],i; 
		int output=1; 
		for (int i=0;i<n;i++){ 
			scanf("%d",&a[i]); 
		} 
		for (int i=0;i<n/2;i++){ 
			if(a[i]!=a[n-1-i]){ output =-1; break; } 
		} 
		if(output==-1)printf("NO\n"); 
		else printf("YES\n"); 
		t--; 
	} 
}
