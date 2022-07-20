#include<stdio.h> 
//Bai 2
void nhapMang(int a[][100],int n, int m){
	int i=0;
	while(i<n){
		int j=0;
		while(j<m){
			scanf("%d",&a[i][j]);
			j++;
		}
		i++; 
	}
}
void sapXepGiam(int a[100][100], int m, int n){
	int k = m*n, i=0;
	while(i<k-1){
		int j=i+1;
		while(j<k){
			if(a[i/n][i%n]<a[j/n][j%n]){
				int temp  = a[i/n][i%n];
				a[i/n][i%n] = a[j/n][j%n];
				a[j/n][j%n] = temp;
			}
			j++;
		}
		i++;
	}
}
int checkMax2(int a[][100],int n,int m){
	int i=0,tmp=a[0][0];
	while(i<n){
		int j=0;
		while(j<m){
			if(tmp!=a[i][j]) return 1;
			j++;
		}
		i++; 
	}
	return 0;
}
int max2(int a[][100],int n,int m){
	int max1=a[0][0];
	int i=0;
	while(i<n){
		int j=0;
		while(j<m){
			if(a[i][j]<max1){
				return a[i][j];
			}
			j++;
		}
		i++;
	}
}
main(){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		int n,m; 
		scanf("%d%d",&n,&m); 
		int a[n][100];
		nhapMang(a,n,m);
		sapXepGiam(a,n,m);
		printf("%d ",a[0][0]);
		if(checkMax2(a,n,m)==0) printf("-1\n");
		else{
			int res=max2(a,n,m);
			printf("%d\n",res);
		}
	} 
	return 0; 
} 

