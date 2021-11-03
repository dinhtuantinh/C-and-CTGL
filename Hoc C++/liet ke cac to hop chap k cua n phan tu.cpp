#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int a[100000];
int k,n;
void Result(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void backtrack(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			Result();
		}
		else{
			backtrack(i+1);
		}
	}
}
void toHop(){
	if(k>=0&&k<=n){
		a[0]=0;
		backtrack(1);
	}
	else{
		cout<<"Loi: Khong thoa man dieu kien 0<=k<=n"<<endl;
	}
}
int main(){
	cout<<"Vui long nhap n va k thoa man 0<=k<=n:\nn = ";cin>>n;
	cout<<"k = ";cin>>k;
	cout<<"\nCac to hop chap "<<k<<" cua "<<n<<" phan tu la:\n";
	toHop();
	return 0;
}

