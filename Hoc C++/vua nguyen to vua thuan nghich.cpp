#include "stdio.h" 
#include "math.h" 
int kiemtraSNT (int x){ 
	for (int i=2;i<=sqrt(x);i++){ 
		if (x%i==0) return 0; 
	} 
	return 1; 
} 
int kiemtraSTN (int n){
	 int m=n; int dao = 0; 
	 while (m>0){ 
		 dao = dao*10+m%10; 
		 m/=10; 
	 } 
	 if (dao==n) return 1; 
	 else return 0; 
 } 
 int main (){ 
	 int t,a,b; scanf("%d",&t); 
	 while (t--){ 
		 int dem=0; scanf ("%d %d",&a,&b); 
		 for (int i=a;i<=b;i++){ 
			 if (kiemtraSTN(i)&&kiemtraSNT(i)) { 
				 if (dem!=0 && dem%10==0) printf ("\n"); 
				 printf ("%d ",i); 
				 dem++; 
			 } 
		 } 
		 printf ("\n"); 
	 } 
 }
