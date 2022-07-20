#include <stdio.h>

int main()
{
    /* code */
//    int t;
//    scanf("%d",&t);
//    while(t--){
    	int n;
	    scanf("%d",&n);
	    int a=n/365;
	    int b=(n-(a*365))/7;
	    int c=n-(a*365)-(b*7);
	    printf("%d %d %d",a,b,c);
		
	    
//	}
    
    return 0;
}

