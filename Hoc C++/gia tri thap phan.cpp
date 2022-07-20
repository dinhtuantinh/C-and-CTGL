#include <stdio.h>

int main()
{
    /* code */
    int t;
    scanf("%d",&t);
    while(t--){
    	int n;
	    scanf("%d",&n);
	    printf("%.15lf\n",1/(double)n);
	}
    
    return 0;
}
