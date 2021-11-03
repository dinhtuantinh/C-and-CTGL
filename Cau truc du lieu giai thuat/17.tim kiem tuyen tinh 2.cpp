#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh 
//Cau truc sinh vien
struct SinhVien
{
	char ma[10];
	char ten[150];
	bool gioitinh;
};
void NhapDanhSach(SinhVien dsSV[], int siso);
void XuatDanhSach(SinhVien dsSV[], int siso);
SinhVien *TimSinhVienTheoMa(SinhVien dsSV[],int siso,char matim[]);
int main(){
	int siso=2;
	SinhVien dsSV[siso];
	NhapDanhSach(dsSV,siso);
	cout<<"Danh sach sinh vien sau khi nhap:\n";
	XuatDanhSach(dsSV,siso);
	char matim[10];
	cout<<"Nhap ma muon tim:";
	gets(matim);
	SinhVien *pSv=TimSinhVienTheoMa(dsSV,siso,matim);
	if(pSv==NULL){
		cout<<"Khong tim thay ma "<<matim;
	}
	else{
		cout<<"Tim thay Sinh Vien co ma="<<matim<<endl;
		cout<<pSv->ma<<"-"<<pSv->ten<<"-"<<pSv->gioitinh<<endl;
	}
	cout<<"Moi ban nhap gioi tinh:(m/f): ";
	char gttim[2];
	gets(gttim);
	for(int i=0;i<siso;i++){
		bool gttimbool=true;//nam
		if(strcmp(gttim,"f"))
			gttimbool=false;//nu
		if(dsSV[i].gioitinh==gttimbool)
		{
			cout<<dsSV[i].ma<<"\t"<<dsSV[i].ten<<"\t"<<(dsSV[i].gioitinh==true?"Nu":"Nam")<<"\n";
		}
	}
	return 0;
}
void NhapDanhSach(SinhVien dsSV[], int siso){
	for(int i=0;i<siso;i++){
		cout<<"Nhap ma :";
		gets(dsSV[i].ma);
		cout<<"Nhap ten:";
		gets(dsSV[i].ten);
		cout<<"Gioi tinh(m/f):";
		char gt[2];
		gets(gt);
		if(strcmp(gt,"m")==0)
			dsSV[i].gioitinh=false;
		else
			dsSV[i].gioitinh=true;
	}
}
void XuatDanhSach(SinhVien dsSV[], int siso){
	for(int i=0;i<siso;i++){
		cout<<dsSV[i].ma<<"\t"<<dsSV[i].ten<<"\t"<<(dsSV[i].gioitinh==true?"Nu":"Nam")<<"\n";
	}
}
SinhVien *TimSinhVienTheoMa(SinhVien dsSV[],int siso,char matim[]){
	for(int i=0;i<siso;i++){
		if(strcmp(dsSV[i].ma,matim)==0){
			return &dsSV[i];
		}
	}
}


