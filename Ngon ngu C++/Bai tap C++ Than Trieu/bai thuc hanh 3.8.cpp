#include<iostream> 
#include<fstream> 
#include<cstring> 
using namespace std; 
class banggia; 
class hangxuat; 
class phieuxuat; 
class hang{ 
	protected: 
		char tenhang[20]; 
		int gia; 
	public: 
		friend banggia; 
		friend phieuxuat;
}; 
class banggia{ 
	protected: 
		hang dshang[100]; 
		int tshang; 
	public: 
		void nhapbp(); 
		void xemmh(); 
		void xemgia(); 
		int getgia(char *); 
};
class hangxuat:public hang{ 
	protected: 
		int soluongxuat; 
		int thanhtien; 
	public: 
		friend phieuxuat;
}; 
class phieuxuat{ 
	private: 
		int sophieu; 
		int tongtien; 
		int tshangxuat; 
		hangxuat dshangxuat[100]; 
	public: 
		void nhapbp(); 
		void tinhdongia(banggia); 
		void xemmh(); 
		void ghitep(); 
		void doctep();
};
void banggia::nhapbp(){ 
	cout<<"Nhap tong so hang : ";cin>>tshang; 
	for(int i=1;i<=tshang;i++) {
		cout<<"Nhap ten cua hang "; 
		fflush(stdin); 
		cin.getline(dshang[i].tenhang,20); 
		fflush(stdin); 
		cout<<"Nhap gia hang "<<i<<": ";cin>>dshang[i].gia;
	}
} 
void banggia::xemmh(){ 
	cout<<"\n ------Thong tin danh muc sach--------\n"; 
	for(int i=1;i<=tshang;i++) { 
		cout<<"Ten hang: "<<dshang[i].tenhang<<"\t Gia: "<<dshang[i].gia<<endl; 
	}
} 
int banggia::getgia(char *th ) { 
	for(int i=1;i<=tshang;i++) { 
		if(strcmp(dshang[i].tenhang,th)==0) 
			return dshang[i].gia; 
	}
}
void banggia::xemgia() { 
	char th[20];
	cout<<"Nhap ten hang ban muon xem gia:"; 
	fflush(stdin); 
	cin.getline(th,20); 
	fflush(stdin); 
	for(int i=1;i<=tshang;i++) { 
		if(strcmp(dshang[i].tenhang,th)==0) 
			cout<<"Gia cua hang: "<<dshang[i].gia<<endl; 
	} 
}
void phieuxuat::nhapbp(){ 
	cout<<"Nhap so phieu: ";cin>>sophieu; 
	cout<<"Nhap tong so loai hang xuat : ";cin>>tshangxuat; 
	for(int i=1;i<=tshangxuat;i++) { 
		cout<<"Nhap ten hang xuat: "; 
		fflush(stdin); 
		cin.getline(dshangxuat[i].tenhang,20); 
		fflush(stdin); 
		cout<<"Nhap so luong: ";cin>>dshangxuat[i].soluongxuat; 
	} 
}
void phieuxuat::tinhdongia(banggia d){ 
	int dongia; 
	tongtien=0; 
	for(int i=1;i<=tshangxuat;i++) {
		dongia=d.getgia(dshangxuat[i].tenhang); 
		dshangxuat[i].thanhtien=dongia*dshangxuat[i].soluongxuat; 
		tongtien+=dshangxuat[i].thanhtien;
	}
} 
void phieuxuat::xemmh(){ 
	cout<<"\n----------Thong tin danh hang xuat------------\n "; 
	cout<<"So phieu: "<<sophieu<<endl; 
	cout<<"Tong so loai hang: "<<tshangxuat<<endl; 
	for(int i=1;i<=tshangxuat;i++) { 
		cout<<"Ten hang: "<<dshangxuat[i].tenhang<<"\t So luong "<< 
		dshangxuat[i].soluongxuat<<"\t Thanh tien: "<<dshangxuat[i].thanhtien<<endl;
	} 
	cout<<"Tong tien: "<<tongtien; 
}
void phieuxuat::ghitep(){ 
	ofstream ghi("3put.dat",ios::binary); 
	ghi.write(reinterpret_cast  <const char *>(this),sizeof(phieuxuat)); 
	ghi.close(); 
}
void phieuxuat::doctep() { 
	ifstream doc("3put.dat",ios::binary); 
	phieuxuat a; 
	doc.read(reinterpret_cast <char *> (&a),sizeof(phieuxuat)); 
	cout<<"\n----------Thong tin danh hang xuat doc tu tep------------\n "; 
	cout<<"So phieu: "<<a.sophieu<<endl; 
	cout<<"Tong so loai hang: "<<a.tshangxuat<<endl; 
	for(int i=1;i<=a.tshangxuat;i++) { 
		cout<<"Ten hang"<<a.dshangxuat[i].tenhang<<"\t So luong "<< 
		a.dshangxuat[i].soluongxuat<<"\t Thanh tien: "<<a.dshangxuat[i].thanhtien<<endl; 
	} 
	cout<<"Tong tien: "<<a.tongtien; 
	doc.close(); 
} 
main() {
	banggia a; 
	a.nhapbp(); 
	a.xemmh(); 
	a.xemgia();
	
	phieuxuat b; 
	b.nhapbp(); 
	b.tinhdongia(a); 
	b.xemmh(); 
	b.ghitep(); 
	b.doctep();
}
