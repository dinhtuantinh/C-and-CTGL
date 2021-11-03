#include<iostream>
using namespace std;
int a[100005];
void sang(){
	for(int i=2;i<=10001;i++) a[i]=1;
	for(int i=2;i<=10001;i++){
		if(a[i]==1){
			for(int j=i*i;j<=10001;j=j+i){
				a[j]=0;
			}
		}
	}
}
void sinh(int n){
	int check=0;
	for(int i=2;i<=n/2;i++){
		if(a[i]==1&&a[n-i]==1){
			cout<<i<<" "<<n-i;
			check++;
			break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		sang();
		sinh(n);
		cout<<endl;
	}
	return 0;
}


