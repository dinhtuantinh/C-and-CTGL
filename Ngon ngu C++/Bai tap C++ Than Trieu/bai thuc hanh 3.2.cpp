#include<bits/stdc++.h>

using namespace std;
class hang{
	protected:
		char ten[10]; long gia;
		public:
			long xuatgia(){
				return gia;
			}
			void nhaptenbp(){
				cout<<"\n nhap ten: ";
				cin>>ten;
			}
			void nhapbp(){
				cout<<"\n nhap ten, gia: ";
				cin>>ten>>gia;
			}
			void xemmh(){
				cout<<"\n "<<ten<<" "<<gia;
			}
		friend class banggia;
			
};
class banggia{
	hang a[100]; int ts;
	public:
		void nhapbp(){
			cout<<"\n nhap tong so: ";cin>>ts;
			for(int i=0;i<ts;++i)
				a[i].nhapbp();
		}
		void xemmh(){
			cout<<"\n bang gia: ";
			for(int i=0;i<ts;++i)
				a[i].xemmh();
		}
		hang xemgia(const char pten[]){
			for(int i=0;i<ts;i++){
				if(strcmp(pten,a[i].ten)==0)
					return a[i];
			}
			hang x;x.gia=0;
			return x;
		}	
};
class hangban:public hang{
	long sl,tt;
	public:
		void nhapslbp(banggia d){
			nhaptenbp();
			hang x=d.xemgia(ten);
			gia=x.xuatgia();
			hang::xemmh();
			cout<<"\n nhap so luong: ";cin>>sl;
			tinhtt();
		}
		void tinhtt(){
			tt=sl*gia;
		}
		void xemmh(){
			hang::xemmh();
			cout<<" "<<sl<<" "<<tt;
		}
		friend class hoadon;
};
class hoadon{
		long shd,tt,ts;
		hangban b[100];
	public:
		void nhapbp(banggia d){
			cout<<"\n nhap shd: ";
			cin>>shd;
			tt=0;
			cout<<"\n nhap tong so hang ban: ";
			cin>>ts;
			for(int i=0;i<ts;i++){
				b[i].nhapslbp(d);
				tt=tt+b[i].tt;
			}
		}
		void xemmh(){
			cout<<"\n shd: "<<shd;
			cout<<"\n tong tien: "<<tt;
			for(int i=0;i<ts;i++){
				b[i].xemmh();
			}
		}
};
int main(){
	banggia d;
	d.nhapbp();d.xemmh();
	hoadon x;
	x.nhapbp(d);
	x.xemmh();
	return 0;
}


