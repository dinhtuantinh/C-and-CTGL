#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
//sach thu n = s2, .... s18. 
//ma = ten cac ga
//ten = gio o ga do
struct Tau{
	char namega[20];
	char gio[150];
	bool denga;
};
void NhapDanhSach(Tau tau[], int soluong);
void XuatDanhSach(Tau tau[], int soluong);
Tau *TimTauTheoTenGa(Tau tau[], int soluong,char matim[]);//nhap ma tim la ga can xem gio

int main(){
	int soluong=18;
	Tau tau[soluong];
	NhapDanhSach(tau,soluong);
	cout<<"Danh sach tau sau khi nhap: \n";
	XuatDanhSach(tau,soluong);
	char matim[20];
	return 0;
}
void NhapDanhSach(Tau tau[], int soluong){
	for(int i=0;i<soluong;i++){
		cout<<"Nhap ten ga :";
		gets(tau[i].namega);
		cout<<"den ga(T/F):";
		char den[2];
		gets(den);
		if(strcmp(den,"F")==0)
			tau[i].denga=false;
		else{
			tau[i].denga=true;
			cout<<"Nhap gio tau den ga do:";
			gets(tau[i].gio);
		}	
	}
}
void XuatDanhSach(Tau tau[], int soluong){
	for(int i=0;i<soluong;i++){
		cout<<tau[i].namega<<"\t"<<(tau[i].denga==true?"Co":"Khong")<<"\t"<<tau[i].gio<<"\n";
	}
}
