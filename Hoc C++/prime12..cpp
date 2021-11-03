//#include<iostream>
//#include<math.h>
//using namespace std;
//void sang(int n, int a[]) {
//	long i,j;
//	for( i=2;i<=n;i++){
//		a[i]=1;
//	}
//	a[1]=0;
//	i=2;
//	while(i<=sqrt(n)){
//		while(a[i]==0){
//			i++;
//		}
//		for(j=2;j<=n/i;j++){
//			a[i*j]=0;
//		}
//		i++;
//	}
//}
//void kiemtra(int n,int a[],int k){
//	int check=0;
//	for(int i=2;n>1;i++){
//		while(n%i==0&&a[i]==1){
//			k--;
//			n=n/i;
//			if(k==0){
//				cout<<i;
//				check++;
//			}
//		}
//	}
//	if(check==0) cout<<"-1";
//}
//int main(){
//	int t;
//	cin>>t;
//	int a[100000];
//	for(int i=1;i<=t;i++){
//		int n,k;
//		cin>>n>>k;
//		sang(n,a);
//		kiemtra(n,a,k);
//		cout<<endl;
//	}
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int kq=-1;
		for(int i=2;i*i<=n;i++){
			while(n%i==0){
				//kq=i;
				n/=i;
				k--;
				if(k==0){
				kq=i;
				}
			}
		}	
		if(n!=1){
			k--;
			if(k==0){
				kq=n;
			}
		}
		cout<<kq<<endl;
	}
	return 0;
}
















