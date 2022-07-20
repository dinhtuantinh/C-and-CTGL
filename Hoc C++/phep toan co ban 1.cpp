#include <stdio.h>

int main()
{
    /* code */
//    int t;
//    scanf("%d",&t);
//    while(t--){
    	int n, m;
	    scanf("%d %d",&n,&m);
	    if(m==0){
	    	printf("0");
	    	return 0;
		}
		else{
			printf("%d %d %d %.2f %d",n+m,n-m,m*n,n/(float)m,n%m);
		}
	    
//	}
    
    return 0;
}
