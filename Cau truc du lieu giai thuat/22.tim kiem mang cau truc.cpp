#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
struct Book{
	int ma;
	char ten[150];
	int nam;
};
void NhapDanhSach(Book dsBook[],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap sach thu "<<i<<endl;
		cout<<"Ma: ";
		cin>>dsBook[i].ma;
		cin.ignore();
		cout<<"Ten: ";
		gets(dsBook[i].ten);
		cout<<"Nam xuat ban: ";
		cin>>dsBook[i].nam;
	}
}
void XuatDanhSach(Book dsBook[],int n){
	for(int i=0;i<n;i++){
		Book b=dsBook[i];
		cout<<b.ma<<"\t"<<b.ten<<"\t"<<b.nam<<endl;
	}
}
int sosachtimduoc=0;
Book *TimSachTheoNamXuatBan(Book dsBook[],int n,int year){
	Book dsTimDuoc[n];
	sosachtimduoc=0;
	for(int i=0;i<n;i++){
		Book b=dsBook[i];
		if(b.nam==year){
			dsTimDuoc[sosachtimduoc]=b;
			sosachtimduoc++;
		}
	}
	return dsTimDuoc;
}
int main(){
	int n;
	cout<<"Nhap so cuon sach: ";
	cin>>n;
	Book dsBook[n];
	NhapDanhSach(dsBook,n);
	cout<<"Danh sach sau nhap: \n";
	XuatDanhSach(dsBook,n);
	cout<<"\nNhap nam muon tim: ";
	int year;
	cin>>year;
	Book *TimSachTheoNamXuatBan(Book dsBook,int n,int year);
	if(sosachtimduoc==0){
		cout<<"\nKhong co cuon sach nao co so nam la: "<<year;
	}
	else{
		cout<<"\nCac sach tim thay:\n";
		XuatDanhSach(dsBook,sosachtimduoc);
	}
	return 0;
}


