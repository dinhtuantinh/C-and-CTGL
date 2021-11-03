#include<stdio.h>
//Dinh Tuan Anh
int main(){
	long n;
	scanf("%lld",&n);
	int a=0,b=0,c=0,d=0,e=0;
	while(n>0){
		int i=n%10;
		if(i==2) a++;
		if(i==3) b++;
		if(i==5) c++;
		if(i==7) d++;
		if(i==9) e++;
		n/=10;
	}
	if(a>0) printf("2 %d\n",a);
	if(b>0) printf("3 %d\n",b);
	if(c>0) printf("5 %d\n",c);
	if(d>0) printf("7 %d\n",d);
	if(e>0) printf("9 %d\n",e);
	return 0;
}

