#include<iostream>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void sapXep(int a[],int n){
	for (int i=0;i<n-1;i++){
		for (int j=i;j<n;j++){
			if (a[i]>a[j])
			{
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		nhap(a,n);
		sapXep(a,n);
		int x=a[0];
		for(int i=0;i<n;i++){
			if(a[i]==a[i+1]){
				cout<<"-1"<<endl;
				break;
			}
			else{
				cout<<a[i]<<" "<<a[i+1]<<endl;
				break;
			}
		}
	}
	return 0;
}


