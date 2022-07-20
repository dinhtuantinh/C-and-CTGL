#include "stdio.h" 
#include "math.h" 
int kiemtrasnt(int n){ 
	for(int i=2;i<=sqrt(n);i++){ 
		if(n%i==0){ return 0; break; } 
	}return 1; 
} 
int main(){ 
	int a; scanf("%d",&a); 
	for(int j=2;j<=a;j++){ 
		if(kiemtrasnt(j)==1){ printf("%d\n",j); } 
	} 
}
