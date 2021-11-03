#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n;//so luong do vat
int b;//trong luong gioi han
int a[100];//trong luong tung vat
int c[100];//gia tri su dung tung vat
int x[100];//xau nhi phan(phuong an duyet)
int xopt[100];//phuong an toi uu
int fopt=0;//gia tri toi uu
//kiem tra trong luong tui
bool check(){
	int s=0;
	for(int i=0;i<n;i++){
		s+=a[i]*x[i];
	}
	return (s<=b);
}
//tinh gia tri su dung
int totaValue(){
	int Value=0;
	for(int i=0;i<n;i++){
		Value+=c[i]*x[i];
	}
	return Value;
}
//cap nhat phuong an toi uu
void update(int value){
	fopt=value;
	for(int i=0;i<n;i++){
		xopt[i]=x[i];
	}
}
//khoi tao
void khoitao(){
	for(int i=0;i<n;i++){
		x[i]=0;
	}
}
//hien thi
void hienthi(){
	for(int i=0;i<n;i++){
		cout<<xopt[i]<<" ";
	}
	cout<<endl;
}
//kiem tra
bool kiemtra(){
	for(int i=0;i<n;i++){
		if(x[i]!=1) return false;
	}
	return true;
}
//phuong phap sinh
void Sinh(){
	int i=n;
	while(x[i]==1){
		x[i]=0;
		i--;
	}
	x[i]=1;
} 
int main(){
	cout<<"Nhap so luong do vat n: ";cin>>n;
	cout<<"Nhap trong luong gioi han b: ";cin>>b;
	cout<<"Nhap trong luong tung vat:\n";
	for(int i=0;i<n;i++){
		cout<<"[a"<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"Nhap gia tri su dung tung vat:\n";
	for(int i=0;i<n;i++){
		cout<<"[c"<<i<<"]= ";
		cin>>c[i];
	}
	khoitao();
	while(!kiemtra()){
		Sinh();
		if(check()){
			int value=totaValue();
			if(value>fopt){
				update(value);
			}
		}
	}
	cout<<fopt<<endl;
	return 0;
}


