#include<bits/stdc++.h>
//#include<stdio.h>
//Dinh Tuan Tinh
using namespace std;
struct NhanVien {
	int ma;
	char ten[150];
	int  tuoi;
};
NhanVien *NhapNhanVien();
void XuatNhanVien(NhanVien *nv);
void NhapDanhSachNhanVien(NhanVien **&dsNv, int n);
void XuatDanhSachNhanVien(NhanVien **dsNV, int n);
void InterchangSort(NhanVien **&dsNv,int n);
void QuickSort(NhanVien **&dsNv,int left,int right);
int main() {
	int n=3;
	NhanVien **dsNv;
	NhapDanhSachNhanVien(dsNv,n);
	cout<<"Danh sach sau khi nhap:\n";
	XuatDanhSachNhanVien(dsNv,n);
	InterchangSort(dsNv,n);
	cout<<"\nDanh sach sau khi sap InterchangSort:\n";
	XuatDanhSachNhanVien(dsNv,n);
	QuickSort(dsNv,0,n-1);
	cout<<"\nDanh sach sau khi sap QuickSort:\n";
	XuatDanhSachNhanVien(dsNv,n);
	return 0;
}
NhanVien *NhapNhanVien() {
	NhanVien *nv=new NhanVien;
	cout<<"Nhap ma:";
	cin>>nv->ma;
	cin.ignore();
	cout<<"Nhap ten:";
	gets(nv->ten);
	cout<<"Nhap tuoi:";
	cin>>nv->tuoi;
	return nv;
}
void XuatNhanVien(NhanVien *nv) {
	cout<<nv->ma<<"\t"<<nv->ten<<"\t"<<nv->tuoi<<"\n";
}
void NhapDanhSachNhanVien(NhanVien **&dsNv, int n) {
	dsNv=new NhanVien*[n];
	for(int i=0; i<n; i++) {
		*(dsNv+i)=NhapNhanVien();
	}
}
void XuatDanhSachNhanVien(NhanVien **dsNV, int n) {
	for(int i=0; i<n; i++) {
		NhanVien *nv=*(dsNV+i);
		XuatNhanVien(nv);
	}
}
void InterchangSort(NhanVien **&dsNv,int n) {
	int i,j;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			NhanVien *nvj=*(dsNv+j);
			NhanVien *nvi=*(dsNv+i);
			if(nvj->tuoi<nvi->tuoi) {
				int ma=nvi->ma;
				char ten[150];
				strcpy(ten,nvi->ten);
				int tuoi=nvi->tuoi;
				
				nvi->ma=nvj->ma;
				strcpy(nvi->ten,nvj->ten);
				nvi->tuoi=nvj->tuoi;
				
				nvj->ma=ma;
				strcpy(nvj->ten,ten);
				nvj->tuoi=tuoi;
			}
		}
	}
}
void QuickSort(NhanVien **&dsNv,int left,int right){
	if(left>=right) return;
	NhanVien *pivot=*((dsNv+(left+right)/2));
	int i=left,j=right;
	do{
		while(stricmp((*(dsNv+i))->ten,pivot->ten)<0) i++;
		while(stricmp((*(dsNv+j))->ten,pivot->ten)>0) j--;
		if(i<=j){
			NhanVien *nvi=*(dsNv+i);
			NhanVien *nvj=*(dsNv+j);
			int ma=nvi->ma;
			char ten[150];
			strcpy(ten,nvi->ten);
			int tuoi=nvi->tuoi;
			
			nvi->ma=nvj->ma;
			strcpy(nvi->ten,nvj->ten);
			nvi->tuoi=nvj->tuoi;
			
			nvj->ma=ma;
			strcpy(nvj->ten,ten);
			nvj->tuoi=tuoi;
			
			i++;
			j--;
		}
	}
	while(i<j);
	QuickSort(dsNv,left,j);
	QuickSort(dsNv,i,right);
}






























