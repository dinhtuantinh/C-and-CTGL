#include<iostream>

using namespace std;
//Dinh Tuan Tinh
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,X;
		cin>>n>>X;
		int a[n];
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==X){
				dem++;
			}
		}
		if(dem>0){
			cout<<"1";
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}


