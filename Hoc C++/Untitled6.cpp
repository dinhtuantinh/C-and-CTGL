#include<stdio.h>
#include<math.h>
//Dinh Tuan Tinh
int main(){
	int a, b;
	float c;
	printf("nhap hai so: ");
	scanf("%d %d",&a, &b);
		c=(float) a/b;
	printf("ket qua:%.3f", c);
	return 0;
	float d, e, f;
	printf("nhap so:");
	scanf("%f %f",&d, &e);
	f=(float) (c+d+abs(c-d))/2;
	printf("so be la:%f ", f);
}

