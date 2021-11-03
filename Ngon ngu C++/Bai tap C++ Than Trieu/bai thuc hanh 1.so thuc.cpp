#include<bits/stdc++.h>

using namespace std;
class sothuc
	{
		private:
			float x;
		public:
			sothuc(){
				x=0;
			}	
			sothuc(float px){
				x=px;
			}
			sothuc(sothuc &a){
				x=a.x;
			}
			void nhapbp(){
				cin>>x;
			}
			void xemmh();
			sothuc operator + (sothuc b){
				sothuc c;
				c.x=x+b.x;
				return c;
			}
			friend sothuc operator - (sothuc a, sothuc b);
	};
sothuc operator - (sothuc a, sothuc b){
	sothuc c;
	c.x=a.x - b.x;
	return c;
}
void sothuc::xemmh()
	{
		cout<<x;
	}
int main(){
	sothuc d,e(1.5);
	sothuc f(e);d.nhapbp();
	cout<<"\n d: ";d.xemmh();
	cout<<"\n e: ";e.xemmh();
	cout<<"\n f: ";f.xemmh();
	sothuc a,b;
	a=d+e;
	cout<<"\n a=d+e= ";a.xemmh();
	b=d-e;
	cout<<"\n b=d-e= ";b.xemmh();
	return 0;
}


