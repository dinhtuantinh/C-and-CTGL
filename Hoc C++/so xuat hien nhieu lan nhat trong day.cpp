#include<stdio.h> 
void solve(){ 
	int n,max=0; 
	scanf("%d",&n); 
	int a[100],dd[100005]={0}; 
	for(int i=0;i<n;i++){ 
		scanf("%d",&a[i]); 
		dd[a[i]]++; 
	} 
	for(int i=0;i<n;i++){ 
		if(dd[a[i]]>max){ 
			max=dd[a[i]]; 
		} 
	} 
	for(int i=0;i<n;i++){ 
		if(dd[a[i]]==max){ 
			printf("%d ",a[i]); 
			dd[a[i]]=0; 
		} 
	} 
	printf("\n"); 
} 
int main(){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		solve();
	} 
	return 0; 
}
