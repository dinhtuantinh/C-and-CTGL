#include<iostream> 
#include<cstring> 
#include<fstream> 
using namespace std; 
class bangluong; 
class danhsach; 
class canbo{ 
	protected: 
		char hoten[20]; 
		int luongcoban; 
	public: 
		friend void sapxepgiam(danhsach a); 
		friend danhsach; 
		friend bangluong; 
};
class danhsach{ 
	private:
		canbo dscanbo[100]; 
		int tscanbo;
	public:
		friend void sapxepgiam(danhsach a); 
		friend bangluong; 
		void  nhapbp(); 
		void xemmh(); 
		void sapxepgiam();
};
class luongcb:public canbo{ 
	private: 
		int ngaycong; 
		long luong; 
	public:
		friend bangluong;
}; 
class bangluong{ 
	private: 
		int thang; 
		int tscanbo; 
		luongcb dslcanbo[100]; 
		int tongluong; 
	public:
		bangluong(){ } 
		bangluong(danhsach b); 
		void nhapbp(); 
		int tinhluong(); 
		void xemmh1(); 
		void ghitep();
		void doctep();
}; 
void danhsach::nhapbp(){ 
	cout<<"nhap tong so can bo: ";
	cin>>tscanbo; 
	for(int i=1;i<=tscanbo;i++) {
		cout<<"nhap ten cua can bo "<<i<<" : "; 
		cin>>dscanbo[i].hoten; 
		cout<<"Luong co ban ";
		cin>>dscanbo[i].luongcoban;
	}
}
void danhsach::xemmh(){ 
	cout<<"\n-------Thong tin can bo-------\n"; 
	cout<<"Tong so can bo: "<<tscanbo<<endl; 
	for(int i=1;i<=tscanbo;i++) 
	{ 
		cout<<"\nTen can bo "<<i<<" : "<<dscanbo[i].hoten; 
		cout<<"\t Luong co ban "<<dscanbo[i].luongcoban<<endl;; 
	}
}
void danhsach::sapxepgiam() { 
	for(int i=1;i<=tscanbo;i++ ) { 
		for(int j=i+1;j<=tscanbo;j++) { 
			if(dscanbo[i].luongcoban < dscanbo[j].luongcoban) { 
				canbo temp; 
				temp=dscanbo[i]; 
				dscanbo[i]=dscanbo[j]; 
				dscanbo[j]=temp;
			}
	 	}
	}
}
bangluong::bangluong(danhsach b) { 
	tscanbo=b.tscanbo; 	
	for(int i=1;i<=tscanbo;i++) { 
		strcpy(dslcanbo[i].hoten, b.dscanbo[i].hoten); 
		dslcanbo[i].luongcoban=b.dscanbo[i].luongcoban;
	}
}
void bangluong::nhapbp(){ 
	cout<<"\n Nhap thang : ";
	cin>>thang; 	
	for(int i=1;i<=tscanbo;i++) { 
		cout<<"Nhap ngay cong cho can bo "<<i<<" la: ";
		cin>>dslcanbo[i].ngaycong;
	}
}
int bangluong::tinhluong(){ 
	tongluong=0; 
	for(int i=1;i<=tscanbo;i++)
	{
		dslcanbo[i].luong=dslcanbo[i].luongcoban + dslcanbo[i].ngaycong*50000; 	
		tongluong+=dslcanbo[i].luong;
	}
} 
void bangluong::xemmh1() { 
	cout<<"\n ---------Thong tin bang luong--------\n"; 	
	cout<<"Thang: "<<thang<<endl; 
	for(int i=1; i<=tscanbo;i++) { 
		cout<<"\n Luong cua can bo "<<i<<" la: "<<dslcanbo[i].luong;
	} 
	cout<<"\n Tong luong thang: "<<tongluong;
} 
void bangluong::ghitep(){ 
	ofstream ghi("input.dat", ios::binary); 
	ghi.write(reinterpret_cast <const char *> (this),sizeof(bangluong)); 
	ghi.close(); 
} 
void bangluong::doctep() { 
	ifstream doc("input.dat",ios::binary); 	
	bangluong a; 	
	doc.read(reinterpret_cast <char*>(&a),sizeof(bangluong));
	cout<<"\n ---------Thong tin bang luong doc tu tep--------\n"; 
	cout<<"Thang: "<<a.thang<<endl; 
	for(int i=1; i<=a.tscanbo;i++) { 
		cout<<"\n Luong cua can bo "<<i<<" la: "<<a.dslcanbo[i].luong; 
	} 
	cout<<"\n Tong luong thang: "<<a.tongluong;
	doc.close();
} 
main() { 
	danhsach a; 
	a.nhapbp(); 
	a.xemmh(); 
	a.sapxepgiam(); 
	a.xemmh();
	bangluong b(a); 
	b.nhapbp(); 
	b.tinhluong(); 
	b.xemmh1(); 
	b.ghitep(); 
	b.doctep();
}
