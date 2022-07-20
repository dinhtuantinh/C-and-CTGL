#include <iostream>
#include<cmath>
#include<windows.h>
#define PI 3.1415926535898
using namespace std;
void bacba(float a, float b, float c, float d)
{
  float dt,k,x1,x2,x3,x;
  if(a==0)
  {
    cout<<"Phuong trinh vo nghiem"<<endl;
  }
  dt=pow(b,2)-3*a*c;
  k=(9*a*b*c-2*pow(b,3)-27*pow(a,2)*d)/(2*sqrt(pow(fabs(dt),3)));
  if(dt>0)
  {
    if(fabs(k)<=1)
    {
      x1=(2*sqrt(dt)*cos(acos(k)/3)-b)/(3*a);
      x2=(2*sqrt(dt)*cos(acos(k)/3-(2*PI/3))-b)/(3*a);
      x3=(2*sqrt(dt)*cos(acos(k)/3+(2*PI/3))-b)/(3*a);
      printf("%.4f %.4f %.4f\n",x1,x2,x3);
    }
    if(fabs(k)>1)
    {
      x=((sqrt(dt)*fabs(k))/(3*a*k))*(pow((fabs(k)+sqrt(pow(k,2)-1)),1.0/3)
	  +pow((fabs(k)-sqrt(pow(k,2)-1)),1.0/3))-(b/(3*a));
      printf("%.4f\n",x);
    }
   }
  else if(dt==0)
  {
    x=(-b-pow(-(pow(b,3)-27*a*a*d),1.0/3))/(3*a);//do ham pow khong dung doi so am nen ta phai doi dau.Ct goc:x=(-b+pow(pow(b,3)-27*a*a*d),1.0/3))/(3*a)
    printf("%.4f\n",x);
  }
  else
  {
    x=(sqrt(fabs(dt))/(3*a))*(pow((k+sqrt(k*k+1)),1.0/3)-pow(-(k-sqrt(k*k+1)),1.0/3))-(b/(3*a));
    printf("%.4f\n",x);
  }
}
int main(){
	int t;cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		bacba(a,0,b,-c);
	}
}
