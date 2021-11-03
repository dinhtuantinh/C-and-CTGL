#include<bits/stdc++.h>
//bai 2.8 
using namespace std;
class thoigian
{
		int gio,phut;
	public:
		thoigian()
		{
			gio = 0;
			phut = 0;
		}
		thoigian(int ggio, int pphut)
		{
			gio = ggio;
			phut = pphut;
		}
		thoigian(const char*s)
		{
			gio = 0;
			phut = 0;
			int i;
			for(i=0;s[i]!=':';i++)
				gio=gio*10+(s[i]-'0');
			for(i=i+1;s[i]!='\0';i++)
				phut=phut*10+(s[i]-'0');
		}
		operator char*()
		{
			char*xau = new char[10];
			int i=0,d,c;
			int g = gio, p = phut;
			while(g!=0)
			{
				xau[i]=g%10+'0';
				g=g/10;
				i++;
			}
			d=0;
			c=i-1;
			while(d<c)
			{
				char x = xau[d];
				xau[d] = xau[c];
				xau[c] = x;
				++d;
				--c;
			}
			xau[i]='\0';
			return xau;
		}
		void xemmh()
		{
			cout<<gio<<":"<<phut;
		}
		friend int operator -(thoigian a, thoigian b);
};
int operator -(thoigian a, thoigian b)
{
	int c;
	c =(a.gio-b.gio)*12;
	c=c+a.phut-b.phut;
	return c;
}
int main(){
	thoigian x,y(10,20);
	y.xemmh();
	x=thoigian("9:30");
	cout<<"\nx=";
	x.xemmh();
	cout<<"\n(char*)(y)="<<(char*)(y);
	int z;
	z=x-y;
	cout<<"\nz="<<z;
	return 0;
}


