#include <stdio.h> 
void nhap(int a[],int n) { 
	for(int i=0;i<n;i++) { scanf("%d",&a[i]); } 
} 
int main() { 
	int t,n,m,p; 
	int a[100]; 
	int b[100]; 
	scanf("%d",&t); 
	for(int k=1;k<=t;k++) { 
		scanf("%d%d%d",&n,&m,&p); 
		nhap(a,n); nhap(b,m); 
		printf("Test %d:\n",k); 
		for(int i=0;i<n;i++) { 
			if(i==p) { 
				for(int j=0;j<m;j++) { 
					printf("%d ",b[j]); 
				} 
			} printf("%d ",a[i]); 
		} printf("\n"); 
	} 
}
