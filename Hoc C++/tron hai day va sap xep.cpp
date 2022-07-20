#include<stdio.h> 
#include<math.h> 
#define ll long long 
void swap(int *x, int *y){ 
	int tmp = *x; 
	*x = *y; 
	*y = tmp; 
} 
int main(){ 
	int tc; scanf("%d",&tc); 
	int k=1; 
	while(tc--){ 
		int n; 
		scanf("%d",&n); 
		int a[n]; 
		int b[n]; 
		for(int i=0;i<n;i++) scanf("%d",&a[i]); 
		for(int i=0;i<n;i++) scanf("%d",&b[i]); 
		for(int i=0;i<n;i++) { 
			for(int j=i;j<n;j++){ 
				if(a[i]>a[j]) 
					swap(&a[i],&a[j]); 
				if(b[i]<b[j]) 
					swap(&b[i],&b[j]); 
			} 
		} 
		int c[n*2]; 
		printf("Test %d:\n",k++); 
		for(int i=0;i<2*n;i++){ 
			if(i%2==0) c[i] = a[i/2]; 
			else c[i] = b[i/2]; 
			printf("%d ",c[i]); 
		} 
		printf("\n"); 
	} 
}
