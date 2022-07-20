#include<stdio.h> 
long long max(long long n){ 
	int a[100],i=0; 
	long long duc=0;
	while(n>0){ 
		a[i]=n%10; 
		if(a[i]==5){ 
			a[i]=6; 
		}
		n=n/10; 
		i++; 
	} 
	for(int k=i-1;k>=0;k--){ 
		duc=(duc+a[k])*10; 
	}
	long long f=duc/10; 
	return f; 
} 
long long min (long long n){ 
	int a[100],i=0; 
	long long duc=0; 
	while(n>0){ 
		a[i]=n%10; 
		if(a[i]==6){ 
			a[i]=5; 
		}
		n=n/10; 
		i++; 
	} 
	for(int k=i-1;k>=0;k--){ 
		duc=(duc+a[k])*10; 
	}
	long long f=duc/10; 
	return f; 
} 
int main (){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		long long n,m; 
		scanf("%lld%lld",&n,&m); 
		printf("%lld %lld",min(n)+min(m),max(n)+max(m)); 
		printf("\n");
	}
}
