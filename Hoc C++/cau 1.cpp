#include<stdio.h> 
void nhapMang(int a[],int n){
	int i=0;
	while(i<n){
		scanf("%d",&a[i]);
		i++; 
	}
}
int thuanNghich(int n){
	int dao=0, m=n;
	while(n>0){
		int du=n%10;
		dao=dao*10+du;
		n/=10;
	}
	if(m==dao) return 1;
	else return 0;
}
main(){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		int n; 
		scanf("%d",&n); 
		int a[n],i=0;
		nhapMang(a,n);
		int dem=0;
		while(i<n){
			if(thuanNghich(a[i])==1){
				printf("%d ",a[i]);
				dem+=1;
			}
			i++;
		}
		if(dem==0) printf("-1");
		printf("\n");
	} 
	return 0; 
} 
