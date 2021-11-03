#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int a[1000001];
void sang(){
	for(long long i=0;i<1000001;i++){
		a[i]=1;
	}
	a[0]=0,a[1]=0;
	for(long long i=2;i<1000001;i++){
		if(a[i]==1){
			for(long long j=i*i;j<1000001;j=j+i){
				a[j]=0;
			}
		}
		
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		sang();
		if(n<4){
			cout<<"-1";
		}
		else{
			int check=0;
			for(int i=2;i<=n;i++){
				if(a[i]==1&&a[n-i]==1){
					cout<<i<<" "<<n-i;
					check=1;
					break;
				}
			}
			if(check==0) cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

