#include<bits/stdc++.h>

using namespace std;
class sinhvien{
	protected:
		char ten[10];long maso;
		public:
			long outmaso(){
				return maso;
			}
			void nhaptenbp(){
				cout<<"\n nhap ten: ";
				cin>>ten;
			}
			void nhapbp(){
				cout<<"\n nhap ten, maso: ";
				cin>>ten>>maso;
			}
			void xemmh(){
				cout<<"\n "<<ten<<" "<<maso;
			}
			friend class lop;
};
class lop{
	sinhvien a[100]; int ttsinhvien;
	public:
		void nhapbp(){
			cout<<"\n nhap tong so: ";cin>>ttsinhvien;
			for(int i=0;i<ttsinhvien;++i)
				a[i].nhapbp();
		}
		void xemmh(){
			cout<<"\n lop: ";
			for(int i=0;i<ttsinhvien;++i)
				a[i].xemmh();
		}
		sinhvien xemten(const char pten[]){
			for(int i=0;i<ttsinhvien;i++){
				if(strcmp(pten,a[i].ten)==0)
					return a[i];
			}
			sinhvien x;x.maso=0;
			return x;
		}	
};
class diemsinhvien:public sinhvien{
	long diem, tt;
	void nhapdiembp(lop d){
			nhaptenbp();
			sinhvien x=d.xemten(ten);
			tt=x.xuatten();
			sinhvien::xemmh();
			cout<<"\n nhap diem: ";cin>>diem;
			kiemtratt();
		}
		void kiemtratt(){
			if(diem>=5) cout<<"Qua"<<endl;
			else cout<<"Thi lai"<<endl;
		}
		void xemmh(){
			hang::xemmh();
			cout<<" "<<tt<<" "<<diem;
		}
	friend class bangdiem;
}; 
class bangdiem{
	
};
int main(){
	return 0;
}


