#include<iostream>
#include<math.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t=1;
	
	while(t--){
		int num, sum;
		cin >> num >> sum;
		if(sum==0)
		{
			if(num==1) cout<<"0 0";
			else cout<< "-1 -1";
			cout<< '\n';
		}
		else if(sum>num*9)
		{
			cout<< "-1 -1\n";
			
		}
		else
		{
			string a="";
			int sum1 = sum, num1 = num;
			sum1-=1;
			num1--;
			while(num1--)
			{
				if(sum1>=9)
				{
					a='9'+a;
					sum1-=9;
				}
				else
				{
					char doi;
					doi=sum1+'0';
					a=doi+a;
					sum1=0;
				}
			}
			char moi;
			moi='1'+sum1;
			a=moi+a;
			//so lon
			string b="";
			while(num--)
			{
				if(sum>=9)
				{
					b=b+'9';
					sum-=9;
				}
				else
				{
					char doi;
					doi=sum+'0';
					b=b+doi;
					sum=0;
				}
			}
			cout<< a << " " << b << '\n';
		}
	} 

    return 0;
}
