#include<stdio.h> 
void nhapmang(int a[],int n, int b[], int m){ 
	for(int i=0;i<n;i++){ scanf("%d",&a[i]); } 
	for(int j=0; j<m; j++){ scanf("%d", &b[j]); } 
} 
void xuatB(int b[],int m){ 
	for(int i=0;i<m;i++){ printf("%d ",b[i]); } 
} 
int main(){ 
	int n,m,x; scanf("%d%d",&n,&m); 
	int a[100], b[100]; 
	nhapmang(a, n, b, m); 
	scanf("%d",&x); 
	for(int i=0;i<x;i++) printf("%d ",a[i]); 
	xuatB(b,m); 
	for(int i=x;i<n;i++) printf("%d ",a[i]); 
}
