#include <stdio.h>
#include <math.h>
int dem=0;
long long chuyen(int decimalNumber)
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        dem++;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
 
int main()
{
    int decimalNumber;
    printf("\nNhap so thap phan: ");
    scanf("%d", &decimalNumber);
    for(int i=0;i<8-dem;i++){
    	printf("0");
	}
	
    printf("%d", chuyen(decimalNumber));
}
